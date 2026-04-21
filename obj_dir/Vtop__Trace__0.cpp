// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+1,((1U & (~ ((IData)(vlSelfRef.top__DOT__u_core__DOT__rd_en) 
                                       | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_sw) 
                                          | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_ebreak) 
                                             | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_sb) 
                                                | (IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT____VdfgRegularize_h52656aab_0_1)))))))));
        bufp->chgBit(oldp+2,(vlSelfRef.top__DOT__u_core__DOT__rd_en));
        bufp->chgIData(oldp+3,(vlSelfRef.top__DOT__u_core__DOT__imm),32);
        bufp->chgCData(oldp+4,(vlSelfRef.top__DOT__u_core__DOT__alu_op),4);
        bufp->chgBit(oldp+5,(vlSelfRef.top__DOT__u_core__DOT__alu_src2_imm));
        bufp->chgBit(oldp+6,(vlSelfRef.top__DOT__u_core__DOT__alu_en));
        bufp->chgBit(oldp+7,(((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_auipc) 
                              | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_jal) 
                                 | (IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT____VdfgRegularize_h52656aab_0_1)))));
        bufp->chgCData(oldp+8,((((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_addi) 
                                 | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_add) 
                                    | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_auipc) 
                                       | (IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT____VdfgRegularize_h52656aab_0_3))))
                                 ? 0U : (((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_jal) 
                                          | (IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_jalr))
                                          ? 1U : ((IData)(vlSelfRef.top__DOT__u_core__DOT__mem_re)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_lui)
                                                    ? 3U
                                                    : 0U))))),3);
        bufp->chgCData(oldp+9,(vlSelfRef.top__DOT__u_core__DOT__npc_sel),2);
        bufp->chgBit(oldp+10,(vlSelfRef.top__DOT__u_core__DOT__mem_re));
        bufp->chgBit(oldp+11,(((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_sb) 
                               | (IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_sw))));
        bufp->chgCData(oldp+12,(vlSelfRef.top__DOT__u_core__DOT__mem_width),2);
        bufp->chgBit(oldp+13,(((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_addi) 
                               | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_add) 
                                  | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_jalr) 
                                     | ((IData)(vlSelfRef.top__DOT__u_core__DOT__mem_re) 
                                        | (((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_sb) 
                                            | (IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_sw)) 
                                           | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_xor) 
                                              | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_xori) 
                                                 | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_or) 
                                                    | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_sub) 
                                                       | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT____VdfgRegularize_h52656aab_0_2) 
                                                          | (IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT____VdfgRegularize_h52656aab_0_4)))))))))))));
        bufp->chgBit(oldp+14,(((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_add) 
                               | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_sw) 
                                  | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_sb) 
                                     | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_xor) 
                                        | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_or) 
                                           | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_sub) 
                                              | (IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT____VdfgRegularize_h52656aab_0_4)))))))));
        bufp->chgCData(oldp+15,(vlSelfRef.top__DOT__u_core__DOT__branch_type),3);
        bufp->chgCData(oldp+16,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__imm_type),3);
        bufp->chgBit(oldp+17,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_jal));
        bufp->chgBit(oldp+18,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_jalr));
        bufp->chgBit(oldp+19,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_bne));
        bufp->chgBit(oldp+20,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_beq));
        bufp->chgBit(oldp+21,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_bge));
        bufp->chgBit(oldp+22,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_bgeu));
        bufp->chgBit(oldp+23,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_blt));
        bufp->chgBit(oldp+24,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_bltu));
        bufp->chgBit(oldp+25,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_lui));
        bufp->chgBit(oldp+26,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_lbu));
        bufp->chgBit(oldp+27,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_lw));
        bufp->chgBit(oldp+28,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_ebreak));
        bufp->chgBit(oldp+29,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_sb));
        bufp->chgBit(oldp+30,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_sw));
        bufp->chgBit(oldp+31,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_auipc));
        bufp->chgBit(oldp+32,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_or));
        bufp->chgBit(oldp+33,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_xor));
        bufp->chgBit(oldp+34,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_xori));
        bufp->chgBit(oldp+35,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_add));
        bufp->chgBit(oldp+36,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_addi));
        bufp->chgBit(oldp+37,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_sub));
        bufp->chgBit(oldp+38,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_slti));
        bufp->chgBit(oldp+39,(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_sltiu));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__u_core__DOT__r_data1),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__u_core__DOT__r_data2),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__u_core__DOT__alu_result),32);
        bufp->chgBit(oldp+43,(((6U == (IData)(vlSelfRef.top__DOT__u_core__DOT__branch_type))
                                ? (vlSelfRef.top__DOT__u_core__DOT__r_data1 
                                   == vlSelfRef.top__DOT__u_core__DOT__r_data2)
                                : ((1U == (IData)(vlSelfRef.top__DOT__u_core__DOT__branch_type))
                                    ? (vlSelfRef.top__DOT__u_core__DOT__r_data1 
                                       != vlSelfRef.top__DOT__u_core__DOT__r_data2)
                                    : ((2U == (IData)(vlSelfRef.top__DOT__u_core__DOT__branch_type))
                                        ? VL_GTES_III(32, vlSelfRef.top__DOT__u_core__DOT__r_data1, vlSelfRef.top__DOT__u_core__DOT__r_data2)
                                        : ((3U == (IData)(vlSelfRef.top__DOT__u_core__DOT__branch_type))
                                            ? (vlSelfRef.top__DOT__u_core__DOT__r_data1 
                                               >= vlSelfRef.top__DOT__u_core__DOT__r_data2)
                                            : ((4U 
                                                == (IData)(vlSelfRef.top__DOT__u_core__DOT__branch_type))
                                                ? VL_LTS_III(32, vlSelfRef.top__DOT__u_core__DOT__r_data1, vlSelfRef.top__DOT__u_core__DOT__r_data2)
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelfRef.top__DOT__u_core__DOT__branch_type)) 
                                                   & (vlSelfRef.top__DOT__u_core__DOT__r_data1 
                                                      < vlSelfRef.top__DOT__u_core__DOT__r_data2)))))))));
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__u_core__DOT__wb_data),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__u_core__DOT__rdata),32);
        bufp->chgIData(oldp+46,(((IData)(vlSelfRef.top__DOT__u_core__DOT__alu_src2_imm)
                                  ? vlSelfRef.top__DOT__u_core__DOT__imm
                                  : vlSelfRef.top__DOT__u_core__DOT__r_data2)),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf
                                [0x0aU]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top__DOT__u_core__DOT__u_regfile__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+80,(vlSelfRef.clk));
    bufp->chgBit(oldp+81,(vlSelfRef.reset));
    bufp->chgIData(oldp+82,(vlSelfRef.inst),32);
    bufp->chgIData(oldp+83,(vlSelfRef.pc),32);
    bufp->chgCData(oldp+84,((0x0000001fU & (vlSelfRef.inst 
                                            >> 0x0000000fU))),5);
    bufp->chgCData(oldp+85,((0x0000001fU & (vlSelfRef.inst 
                                            >> 0x00000014U))),5);
    bufp->chgCData(oldp+86,((0x0000001fU & (vlSelfRef.inst 
                                            >> 7U))),5);
    bufp->chgIData(oldp+87,(((1U == (IData)(vlSelfRef.top__DOT__u_core__DOT__npc_sel))
                              ? (0xfffffffeU & vlSelfRef.top__DOT__u_core__DOT__alu_result)
                              : (((3U == (IData)(vlSelfRef.top__DOT__u_core__DOT__npc_sel)) 
                                  & ((6U == (IData)(vlSelfRef.top__DOT__u_core__DOT__branch_type))
                                      ? (vlSelfRef.top__DOT__u_core__DOT__r_data1 
                                         == vlSelfRef.top__DOT__u_core__DOT__r_data2)
                                      : ((1U == (IData)(vlSelfRef.top__DOT__u_core__DOT__branch_type))
                                          ? (vlSelfRef.top__DOT__u_core__DOT__r_data1 
                                             != vlSelfRef.top__DOT__u_core__DOT__r_data2)
                                          : ((2U == (IData)(vlSelfRef.top__DOT__u_core__DOT__branch_type))
                                              ? VL_GTES_III(32, vlSelfRef.top__DOT__u_core__DOT__r_data1, vlSelfRef.top__DOT__u_core__DOT__r_data2)
                                              : ((3U 
                                                  == (IData)(vlSelfRef.top__DOT__u_core__DOT__branch_type))
                                                  ? 
                                                 (vlSelfRef.top__DOT__u_core__DOT__r_data1 
                                                  >= vlSelfRef.top__DOT__u_core__DOT__r_data2)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.top__DOT__u_core__DOT__branch_type))
                                                   ? 
                                                  VL_LTS_III(32, vlSelfRef.top__DOT__u_core__DOT__r_data1, vlSelfRef.top__DOT__u_core__DOT__r_data2)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.top__DOT__u_core__DOT__branch_type)) 
                                                   & (vlSelfRef.top__DOT__u_core__DOT__r_data1 
                                                      < vlSelfRef.top__DOT__u_core__DOT__r_data2))))))))
                                  ? vlSelfRef.top__DOT__u_core__DOT__alu_result
                                  : ((2U == (IData)(vlSelfRef.top__DOT__u_core__DOT__npc_sel))
                                      ? vlSelfRef.top__DOT__u_core__DOT__alu_result
                                      : ((IData)(4U) 
                                         + vlSelfRef.pc))))),32);
    bufp->chgIData(oldp+88,(((IData)(4U) + vlSelfRef.pc)),32);
    bufp->chgIData(oldp+89,((((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_auipc) 
                              | ((IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT__is_jal) 
                                 | (IData)(vlSelfRef.top__DOT__u_core__DOT__u_idu__DOT____VdfgRegularize_h52656aab_0_1)))
                              ? vlSelfRef.pc : vlSelfRef.top__DOT__u_core__DOT__r_data1)),32);
    bufp->chgCData(oldp+90,((0x0000007fU & vlSelfRef.inst)),7);
    bufp->chgCData(oldp+91,((7U & (vlSelfRef.inst >> 0x0000000cU))),3);
    bufp->chgCData(oldp+92,((vlSelfRef.inst >> 0x00000019U)),7);
    bufp->chgIData(oldp+93,((((- (IData)((vlSelfRef.inst 
                                          >> 0x0000001fU))) 
                              << 0x0000000cU) | (vlSelfRef.inst 
                                                 >> 0x00000014U))),32);
    bufp->chgIData(oldp+94,((((- (IData)((vlSelfRef.inst 
                                          >> 0x0000001fU))) 
                              << 0x0000000cU) | ((0x00000fe0U 
                                                  & (vlSelfRef.inst 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.inst 
                                                       >> 7U))))),32);
    bufp->chgIData(oldp+95,((0xfffff000U & vlSelfRef.inst)),32);
    bufp->chgIData(oldp+96,((((- (IData)((vlSelfRef.inst 
                                          >> 0x0000001fU))) 
                              << 0x0000000dU) | (((
                                                   (2U 
                                                    & (vlSelfRef.inst 
                                                       >> 0x0000001eU)) 
                                                   | (1U 
                                                      & (vlSelfRef.inst 
                                                         >> 7U))) 
                                                  << 0x0000000bU) 
                                                 | ((0x000007e0U 
                                                     & (vlSelfRef.inst 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001eU 
                                                       & (vlSelfRef.inst 
                                                          >> 7U)))))),32);
    bufp->chgIData(oldp+97,(((((0x00000ffeU & ((- (IData)(
                                                          (vlSelfRef.inst 
                                                           >> 0x0000001fU))) 
                                               << 1U)) 
                               | (vlSelfRef.inst >> 0x0000001fU)) 
                              << 0x00000014U) | (((
                                                   (0x000001feU 
                                                    & (vlSelfRef.inst 
                                                       >> 0x0000000bU)) 
                                                   | (1U 
                                                      & (vlSelfRef.inst 
                                                         >> 0x00000014U))) 
                                                  << 0x0000000bU) 
                                                 | (0x000007feU 
                                                    & (vlSelfRef.inst 
                                                       >> 0x00000014U))))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
