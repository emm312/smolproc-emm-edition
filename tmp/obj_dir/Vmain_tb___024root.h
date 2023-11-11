// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmain_tb.h for the primary calling header

#ifndef VERILATED_VMAIN_TB___024ROOT_H_
#define VERILATED_VMAIN_TB___024ROOT_H_  // guard

#include "verilated.h"


class Vmain_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmain_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ main_tb__DOT__rclk;
    VL_IN8(clk,0,0);
    VL_IN8(clk_en,0,0);
    VL_IN8(sync_rst,0,0);
    CData/*0:0*/ main_tb__DOT__cpu__DOT__read_en_A;
    CData/*0:0*/ main_tb__DOT__cpu__DOT__read_en_B;
    CData/*0:0*/ main_tb__DOT__cpu__DOT__write_en;
    CData/*1:0*/ main_tb__DOT__cpu__DOT__addr_read_A;
    CData/*1:0*/ main_tb__DOT__cpu__DOT__addr_read_B;
    CData/*1:0*/ main_tb__DOT__cpu__DOT__addr_write;
    CData/*7:0*/ main_tb__DOT__cpu__DOT__regoutA;
    CData/*7:0*/ main_tb__DOT__cpu__DOT__regoutB;
    CData/*7:0*/ main_tb__DOT__cpu__DOT__data_in;
    CData/*7:0*/ main_tb__DOT__cpu__DOT__pc;
    CData/*0:0*/ main_tb__DOT__cpu__DOT__mem_read_en;
    CData/*7:0*/ main_tb__DOT__cpu__DOT__mem_data_out_A;
    CData/*7:0*/ main_tb__DOT__cpu__DOT__mem_data_out_B;
    CData/*0:0*/ main_tb__DOT__cpu__DOT__mem_write;
    CData/*7:0*/ main_tb__DOT__cpu__DOT__mem_wr_addr;
    CData/*7:0*/ main_tb__DOT__cpu__DOT__mem_data_addr;
    CData/*7:0*/ main_tb__DOT__cpu__DOT__branch_wr;
    CData/*0:0*/ main_tb__DOT__cpu__DOT__branch_wr_en;
    CData/*7:0*/ main_tb__DOT__cpu__DOT__fetched_word;
    CData/*0:0*/ main_tb__DOT__cpu__DOT__stall_decode;
    CData/*1:0*/ main_tb__DOT__cpu__DOT__dst;
    CData/*7:0*/ main_tb__DOT__cpu__DOT__data_A;
    CData/*7:0*/ main_tb__DOT__cpu__DOT__data_B;
    CData/*7:0*/ main_tb__DOT__cpu__DOT__decoded_opcode;
    CData/*0:0*/ main_tb__DOT__cpu__DOT__decode_stage__DOT__has_imm;
    CData/*0:0*/ main_tb__DOT__cpu__DOT__decode_stage__DOT__prv_imm;
    CData/*7:0*/ main_tb__DOT__cpu__DOT__decode_stage__DOT__inner_opc;
    CData/*2:0*/ main_tb__DOT__cpu__DOT__decode_stage__DOT__op_rom__DOT__instr_t_inner;
    CData/*0:0*/ __Vtrigprevexpr___TOP__main_tb__DOT__rclk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ main_tb__DOT__cpu__DOT__decode_stage__DOT____Vcellout__op_rom__instr_t;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 256> main_tb__DOT__cpu__DOT__ram__DOT__ram;
    VlUnpacked<CData/*7:0*/, 4> main_tb__DOT__cpu__DOT__regfile__DOT__regs;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmain_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmain_tb___024root(Vmain_tb__Syms* symsp, const char* v__name);
    ~Vmain_tb___024root();
    VL_UNCOPYABLE(Vmain_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
