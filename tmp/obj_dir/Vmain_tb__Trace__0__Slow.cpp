// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain_tb__Syms.h"


VL_ATTR_COLD void Vmain_tb___024root__trace_init_sub__TOP__0(Vmain_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+22,"clk", false,-1);
    tracep->declBit(c+23,"clk_en", false,-1);
    tracep->declBit(c+24,"sync_rst", false,-1);
    tracep->pushNamePrefix("main_tb ");
    tracep->declBit(c+22,"clk", false,-1);
    tracep->declBit(c+23,"clk_en", false,-1);
    tracep->declBit(c+24,"sync_rst", false,-1);
    tracep->declBit(c+25,"rclk", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+24,"sync_rst", false,-1);
    tracep->declBit(c+1,"read_en_A", false,-1);
    tracep->declBit(c+2,"read_en_B", false,-1);
    tracep->declBit(c+26,"write_en", false,-1);
    tracep->declBus(c+3,"addr_read_A", false,-1, 1,0);
    tracep->declBus(c+4,"addr_read_B", false,-1, 1,0);
    tracep->declBus(c+27,"addr_write", false,-1, 1,0);
    tracep->declBus(c+5,"regoutA", false,-1, 7,0);
    tracep->declBus(c+6,"regoutB", false,-1, 7,0);
    tracep->declBus(c+28,"data_in", false,-1, 7,0);
    tracep->declBus(c+7,"pc", false,-1, 7,0);
    tracep->declBit(c+29,"mem_read_en", false,-1);
    tracep->declBus(c+30,"mem_data_out_A", false,-1, 7,0);
    tracep->declBus(c+8,"mem_data_out_B", false,-1, 7,0);
    tracep->declBit(c+31,"mem_write", false,-1);
    tracep->declBus(c+32,"mem_wr_addr", false,-1, 7,0);
    tracep->declBus(c+33,"mem_data_addr", false,-1, 7,0);
    tracep->declBus(c+34,"branch_wr", false,-1, 7,0);
    tracep->declBit(c+35,"branch_wr_en", false,-1);
    tracep->declBus(c+9,"fetched_word", false,-1, 7,0);
    tracep->declBit(c+36,"stall_decode", false,-1);
    tracep->declBus(c+10,"dst", false,-1, 1,0);
    tracep->declBus(c+11,"data_A", false,-1, 7,0);
    tracep->declBus(c+12,"data_B", false,-1, 7,0);
    tracep->declBus(c+13,"decoded_opcode", false,-1, 7,0);
    tracep->pushNamePrefix("decode_stage ");
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+24,"sync_rst", false,-1);
    tracep->declBus(c+9,"opcode", false,-1, 7,0);
    tracep->declBit(c+36,"stall_en", false,-1);
    tracep->declBus(c+10,"dst", false,-1, 1,0);
    tracep->declBus(c+11,"data_out_A", false,-1, 7,0);
    tracep->declBus(c+12,"data_out_B", false,-1, 7,0);
    tracep->declBus(c+13,"opc_out", false,-1, 7,0);
    tracep->declBus(c+3,"regfile_read_A", false,-1, 1,0);
    tracep->declBus(c+4,"regfile_read_B", false,-1, 1,0);
    tracep->declBit(c+1,"read_en_A", false,-1);
    tracep->declBit(c+2,"read_en_B", false,-1);
    tracep->declBus(c+5,"data_A", false,-1, 7,0);
    tracep->declBus(c+6,"data_B", false,-1, 7,0);
    tracep->declBit(c+14,"has_imm", false,-1);
    tracep->declBus(c+15,"typ", false,-1, 31,0);
    tracep->declBit(c+16,"prv_imm", false,-1);
    tracep->declBus(c+17,"inner_opc", false,-1, 7,0);
    tracep->pushNamePrefix("op_rom ");
    tracep->declBus(c+9,"opcode", false,-1, 7,0);
    tracep->declBus(c+15,"instr_t", false,-1, 31,0);
    tracep->declBus(c+37,"instr_t_inner", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch_stage ");
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+24,"sync_rst", false,-1);
    tracep->declBus(c+7,"pc", false,-1, 7,0);
    tracep->declBus(c+8,"mem_data_in", false,-1, 7,0);
    tracep->declBus(c+9,"word", false,-1, 7,0);
    tracep->declBus(c+34,"branch_wr", false,-1, 7,0);
    tracep->declBit(c+35,"branch_wr_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ram ");
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+24,"sync_rst", false,-1);
    tracep->declBus(c+33,"addr_read_A", false,-1, 7,0);
    tracep->declBus(c+32,"addr_write", false,-1, 7,0);
    tracep->declBus(c+7,"pc", false,-1, 7,0);
    tracep->declBus(c+33,"data", false,-1, 7,0);
    tracep->declBit(c+31,"write_en", false,-1);
    tracep->declBit(c+29,"read_en_A", false,-1);
    tracep->declBus(c+8,"data_out_A", false,-1, 7,0);
    tracep->declBus(c+8,"data_out_B", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+24,"sync_rst", false,-1);
    tracep->declBit(c+1,"read_en_A", false,-1);
    tracep->declBit(c+2,"read_en_B", false,-1);
    tracep->declBit(c+26,"write_en", false,-1);
    tracep->declBus(c+3,"addr_read_A", false,-1, 1,0);
    tracep->declBus(c+4,"addr_read_B", false,-1, 1,0);
    tracep->declBus(c+27,"addr_write", false,-1, 1,0);
    tracep->declBus(c+28,"data_in", false,-1, 7,0);
    tracep->declBus(c+5,"data_out_A", false,-1, 7,0);
    tracep->declBus(c+6,"data_out_B", false,-1, 7,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+18+i*1,"regs", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vmain_tb___024root__trace_init_top(Vmain_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root__trace_init_top\n"); );
    // Body
    Vmain_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmain_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmain_tb___024root__trace_register(Vmain_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmain_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmain_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmain_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmain_tb___024root__trace_full_sub_0(Vmain_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmain_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root__trace_full_top_0\n"); );
    // Init
    Vmain_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain_tb___024root*>(voidSelf);
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmain_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmain_tb___024root__trace_full_sub_0(Vmain_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->main_tb__DOT__cpu__DOT__read_en_A));
    bufp->fullBit(oldp+2,(vlSelf->main_tb__DOT__cpu__DOT__read_en_B));
    bufp->fullCData(oldp+3,(vlSelf->main_tb__DOT__cpu__DOT__addr_read_A),2);
    bufp->fullCData(oldp+4,(vlSelf->main_tb__DOT__cpu__DOT__addr_read_B),2);
    bufp->fullCData(oldp+5,(vlSelf->main_tb__DOT__cpu__DOT__regoutA),8);
    bufp->fullCData(oldp+6,(vlSelf->main_tb__DOT__cpu__DOT__regoutB),8);
    bufp->fullCData(oldp+7,(vlSelf->main_tb__DOT__cpu__DOT__pc),8);
    bufp->fullCData(oldp+8,(vlSelf->main_tb__DOT__cpu__DOT__mem_data_out_B),8);
    bufp->fullCData(oldp+9,(vlSelf->main_tb__DOT__cpu__DOT__fetched_word),8);
    bufp->fullCData(oldp+10,(vlSelf->main_tb__DOT__cpu__DOT__dst),2);
    bufp->fullCData(oldp+11,(vlSelf->main_tb__DOT__cpu__DOT__data_A),8);
    bufp->fullCData(oldp+12,(vlSelf->main_tb__DOT__cpu__DOT__data_B),8);
    bufp->fullCData(oldp+13,(vlSelf->main_tb__DOT__cpu__DOT__decoded_opcode),8);
    bufp->fullBit(oldp+14,(vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__has_imm));
    bufp->fullIData(oldp+15,(vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT____Vcellout__op_rom__instr_t),32);
    bufp->fullBit(oldp+16,(vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__prv_imm));
    bufp->fullCData(oldp+17,(vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__inner_opc),8);
    bufp->fullCData(oldp+18,(vlSelf->main_tb__DOT__cpu__DOT__regfile__DOT__regs[0]),8);
    bufp->fullCData(oldp+19,(vlSelf->main_tb__DOT__cpu__DOT__regfile__DOT__regs[1]),8);
    bufp->fullCData(oldp+20,(vlSelf->main_tb__DOT__cpu__DOT__regfile__DOT__regs[2]),8);
    bufp->fullCData(oldp+21,(vlSelf->main_tb__DOT__cpu__DOT__regfile__DOT__regs[3]),8);
    bufp->fullBit(oldp+22,(vlSelf->clk));
    bufp->fullBit(oldp+23,(vlSelf->clk_en));
    bufp->fullBit(oldp+24,(vlSelf->sync_rst));
    bufp->fullBit(oldp+25,(vlSelf->main_tb__DOT__rclk));
    bufp->fullBit(oldp+26,(vlSelf->main_tb__DOT__cpu__DOT__write_en));
    bufp->fullCData(oldp+27,(vlSelf->main_tb__DOT__cpu__DOT__addr_write),2);
    bufp->fullCData(oldp+28,(vlSelf->main_tb__DOT__cpu__DOT__data_in),8);
    bufp->fullBit(oldp+29,(vlSelf->main_tb__DOT__cpu__DOT__mem_read_en));
    bufp->fullCData(oldp+30,(vlSelf->main_tb__DOT__cpu__DOT__mem_data_out_A),8);
    bufp->fullBit(oldp+31,(vlSelf->main_tb__DOT__cpu__DOT__mem_write));
    bufp->fullCData(oldp+32,(vlSelf->main_tb__DOT__cpu__DOT__mem_wr_addr),8);
    bufp->fullCData(oldp+33,(vlSelf->main_tb__DOT__cpu__DOT__mem_data_addr),8);
    bufp->fullCData(oldp+34,(vlSelf->main_tb__DOT__cpu__DOT__branch_wr),8);
    bufp->fullBit(oldp+35,(vlSelf->main_tb__DOT__cpu__DOT__branch_wr_en));
    bufp->fullBit(oldp+36,(vlSelf->main_tb__DOT__cpu__DOT__stall_decode));
    bufp->fullCData(oldp+37,(vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__op_rom__DOT__instr_t_inner),3);
}
