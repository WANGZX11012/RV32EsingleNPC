#include "difftest.h"

#include "sim_bridge.h"

#include <cassert>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <dlfcn.h>

#include <difftest-def.h>

struct RefCPUState {
  uint32_t pc;
  uint32_t gpr[32];
};

static RefCPUState ref_cpu = {};
static bool diff_failed = false;
static bool ref_halted = false;
static void *ref_handle = nullptr;

static void (*ref_difftest_regcpy)(void *dut, bool direction) = nullptr;
static void (*ref_difftest_exec)(uint64_t n) = nullptr;
static void (*ref_difftest_raise_intr)(uint64_t NO) = nullptr;

static void load_ref_so() 
{
  const char *ref_so_file = "./obj_dir/ref.so";
  ref_handle = dlopen(ref_so_file, RTLD_LAZY);
  if (ref_handle == nullptr) 
  {
    std::fprintf(stderr, "Failed to open %s: %s\n", ref_so_file, dlerror());
    abort();
  }

  ref_difftest_regcpy = (void (*)(void *, bool))dlsym(ref_handle, "difftest_regcpy");
  ref_difftest_exec = (void (*)(uint64_t))dlsym(ref_handle, "difftest_exec");
  ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(ref_handle, "difftest_raise_intr");
  auto ref_difftest_init = (void (*)(int))dlsym(ref_handle, "difftest_init");
  auto ref_difftest_load_image = (void (*)(const char *))dlsym(ref_handle, "difftest_load_image");

  assert(ref_difftest_regcpy != nullptr);
  assert(ref_difftest_exec != nullptr);
  assert(ref_difftest_raise_intr != nullptr);
  assert(ref_difftest_init != nullptr);
  assert(ref_difftest_load_image != nullptr);

  ref_difftest_init(1234);
  ref_difftest_load_image(nullptr);
}

static void sync_ref_state_from_dut(uint32_t dut_pc) 
{
  RefCPUState dut_init = {};
  dut_init.pc = dut_pc;
  npc_sim_get_gprs(dut_init.gpr);
  ref_difftest_regcpy(&dut_init, DIFFTEST_TO_REF);
}

static void checkregs(const RefCPUState &ref, uint32_t dut_pc, uint32_t dut_inst, const uint32_t *dut_gpr) 
{
  if (ref.pc != dut_pc) {
    std::fprintf(stderr,
      "pc is different after executing instruction 0x%08x at pc = 0x%08x, right = 0x%08x, wrong = 0x%08x, diff = 0x%08x\n",
      dut_inst, dut_pc, ref.pc, dut_pc, ref.pc ^ dut_pc);
    diff_failed = true;
    return;
  }

  for (int i = 0; i < 32; i++) {
    if (ref.gpr[i] != dut_gpr[i]) 
    {
      std::fprintf(stderr,
    "x%d is different after executing instruction 0x%08x at pc = 0x%08x, right = 0x%08x, wrong = 0x%08x, diff = 0x%08x\n",
        i, dut_inst, dut_pc, ref.gpr[i], dut_gpr[i], ref.gpr[i] ^ dut_gpr[i]);
      diff_failed = true;
      return;
    }
  }
}

void difftest_init(uint32_t dut_pc, const char *img_file) 
{
  ref_cpu = {};
  diff_failed = false;
  ref_halted = false;

  load_ref_so();

  auto ref_difftest_load_image = (void (*)(const char *))dlsym(ref_handle, "difftest_load_image");
  assert(ref_difftest_load_image != nullptr);
  ref_difftest_load_image(img_file);

  RefCPUState dut_init = {};
  dut_init.pc = dut_pc;
  npc_sim_get_gprs(dut_init.gpr);
  ref_difftest_regcpy(&dut_init, DIFFTEST_TO_REF);
}

bool difftest_step(uint32_t dut_pc, const uint32_t *dut_gpr) 
{
  if (diff_failed) return false;
  if (ref_halted) return true;

  uint32_t dut_inst = npc_sim_get_inst();
  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_cpu, DIFFTEST_TO_DUT);
  checkregs(ref_cpu, dut_pc, dut_inst, dut_gpr);

  return !diff_failed;
}
