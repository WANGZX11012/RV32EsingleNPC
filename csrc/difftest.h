#ifndef NPC_DIFFTEST_H
#define NPC_DIFFTEST_H

#include <cstdint>

void difftest_init(uint32_t dut_pc, const char *img_file);
bool difftest_step(uint32_t dut_pc, const uint32_t *dut_gpr);

#endif
