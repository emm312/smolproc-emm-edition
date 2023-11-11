// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain_tb__Syms.h"


void Vmain_tb___024root__trace_chg_sub_0(Vmain_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmain_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vmain_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain_tb___024root*>(voidSelf);
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmain_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vmain_tb___024root__trace_chg_sub_0(Vmain_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->main_tb__DOT__cpu__DOT__read_en_A));
        bufp->chgBit(oldp+1,(vlSelf->main_tb__DOT__cpu__DOT__read_en_B));
        bufp->chgCData(oldp+2,(vlSelf->main_tb__DOT__cpu__DOT__addr_read_A),2);
        bufp->chgCData(oldp+3,(vlSelf->main_tb__DOT__cpu__DOT__addr_read_B),2);
        bufp->chgCData(oldp+4,(vlSelf->main_tb__DOT__cpu__DOT__regoutA),8);
        bufp->chgCData(oldp+5,(vlSelf->main_tb__DOT__cpu__DOT__regoutB),8);
        bufp->chgCData(oldp+6,(vlSelf->main_tb__DOT__cpu__DOT__pc),8);
        bufp->chgCData(oldp+7,(vlSelf->main_tb__DOT__cpu__DOT__mem_data_out_B),8);
        bufp->chgCData(oldp+8,(vlSelf->main_tb__DOT__cpu__DOT__fetched_word),8);
        bufp->chgCData(oldp+9,(vlSelf->main_tb__DOT__cpu__DOT__dst),2);
        bufp->chgCData(oldp+10,(vlSelf->main_tb__DOT__cpu__DOT__data_A),8);
        bufp->chgCData(oldp+11,(vlSelf->main_tb__DOT__cpu__DOT__data_B),8);
        bufp->chgCData(oldp+12,(vlSelf->main_tb__DOT__cpu__DOT__decoded_opcode),8);
        bufp->chgBit(oldp+13,(vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__has_imm));
        bufp->chgIData(oldp+14,(vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT____Vcellout__op_rom__instr_t),32);
        bufp->chgBit(oldp+15,(vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__prv_imm));
        bufp->chgCData(oldp+16,(vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__inner_opc),8);
        bufp->chgCData(oldp+17,(vlSelf->main_tb__DOT__cpu__DOT__regfile__DOT__regs[0]),8);
        bufp->chgCData(oldp+18,(vlSelf->main_tb__DOT__cpu__DOT__regfile__DOT__regs[1]),8);
        bufp->chgCData(oldp+19,(vlSelf->main_tb__DOT__cpu__DOT__regfile__DOT__regs[2]),8);
        bufp->chgCData(oldp+20,(vlSelf->main_tb__DOT__cpu__DOT__regfile__DOT__regs[3]),8);
    }
    bufp->chgBit(oldp+21,(vlSelf->clk));
    bufp->chgBit(oldp+22,(vlSelf->clk_en));
    bufp->chgBit(oldp+23,(vlSelf->sync_rst));
    bufp->chgBit(oldp+24,(vlSelf->main_tb__DOT__rclk));
}

void Vmain_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root__trace_cleanup\n"); );
    // Init
    Vmain_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain_tb___024root*>(voidSelf);
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
