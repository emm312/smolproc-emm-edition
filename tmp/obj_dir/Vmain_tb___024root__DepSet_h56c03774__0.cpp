// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain_tb.h for the primary calling header

#include "verilated.h"

#include "Vmain_tb__Syms.h"
#include "Vmain_tb___024root.h"

VL_INLINE_OPT void Vmain_tb___024root___ico_sequent__TOP__0(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->main_tb__DOT__rclk = ((IData)(vlSelf->clk) 
                                  & (IData)(vlSelf->clk_en));
}

void Vmain_tb___024root___eval_ico(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmain_tb___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vmain_tb___024root___eval_act(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___eval_act\n"); );
}

extern const VlUnpacked<IData/*31:0*/, 256> Vmain_tb__ConstPool__TABLE_h3509a686_0;

VL_INLINE_OPT void Vmain_tb___024root___nba_sequent__TOP__0(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vdlyvdim0__main_tb__DOT__cpu__DOT__ram__DOT__ram__v0;
    __Vdlyvdim0__main_tb__DOT__cpu__DOT__ram__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__main_tb__DOT__cpu__DOT__ram__DOT__ram__v0;
    __Vdlyvval__main_tb__DOT__cpu__DOT__ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main_tb__DOT__cpu__DOT__ram__DOT__ram__v0;
    __Vdlyvset__main_tb__DOT__cpu__DOT__ram__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdly__main_tb__DOT__cpu__DOT__pc;
    __Vdly__main_tb__DOT__cpu__DOT__pc = 0;
    CData/*1:0*/ __Vdlyvdim0__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v0;
    __Vdlyvdim0__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v0 = 0;
    CData/*7:0*/ __Vdlyvval__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v0;
    __Vdlyvval__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v0;
    __Vdlyvset__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v1;
    __Vdlyvset__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v1 = 0;
    // Body
    __Vdly__main_tb__DOT__cpu__DOT__pc = vlSelf->main_tb__DOT__cpu__DOT__pc;
    __Vdlyvset__main_tb__DOT__cpu__DOT__ram__DOT__ram__v0 = 0U;
    __Vdlyvset__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v1 = 0U;
    if (vlSelf->main_tb__DOT__cpu__DOT__mem_write) {
        __Vdlyvval__main_tb__DOT__cpu__DOT__ram__DOT__ram__v0 
            = vlSelf->main_tb__DOT__cpu__DOT__mem_data_addr;
        __Vdlyvset__main_tb__DOT__cpu__DOT__ram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__main_tb__DOT__cpu__DOT__ram__DOT__ram__v0 
            = vlSelf->main_tb__DOT__cpu__DOT__mem_wr_addr;
    }
    if (vlSelf->main_tb__DOT__cpu__DOT__write_en) {
        __Vdlyvval__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v0 
            = vlSelf->main_tb__DOT__cpu__DOT__data_in;
        __Vdlyvset__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v0 = 1U;
        __Vdlyvdim0__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v0 
            = vlSelf->main_tb__DOT__cpu__DOT__addr_write;
    }
    if (vlSelf->main_tb__DOT__cpu__DOT__read_en_A) {
        vlSelf->main_tb__DOT__cpu__DOT__regoutA = vlSelf->main_tb__DOT__cpu__DOT__regfile__DOT__regs
            [vlSelf->main_tb__DOT__cpu__DOT__addr_read_A];
    }
    if (vlSelf->main_tb__DOT__cpu__DOT__read_en_B) {
        vlSelf->main_tb__DOT__cpu__DOT__regoutB = vlSelf->main_tb__DOT__cpu__DOT__regfile__DOT__regs
            [vlSelf->main_tb__DOT__cpu__DOT__addr_read_B];
    }
    vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__prv_imm 
        = vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__has_imm;
    if ((1U & (~ (IData)(vlSelf->sync_rst)))) {
        vlSelf->main_tb__DOT__cpu__DOT__fetched_word 
            = vlSelf->main_tb__DOT__cpu__DOT__mem_data_out_B;
    }
    if (__Vdlyvset__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v0) {
        vlSelf->main_tb__DOT__cpu__DOT__regfile__DOT__regs[__Vdlyvdim0__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v0] 
            = __Vdlyvval__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v0;
    }
    if (vlSelf->sync_rst) {
        __Vdly__main_tb__DOT__cpu__DOT__pc = 0U;
        __Vdlyvset__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v1 = 1U;
    } else {
        __Vdly__main_tb__DOT__cpu__DOT__pc = (0xffU 
                                              & ((IData)(vlSelf->main_tb__DOT__cpu__DOT__branch_wr_en)
                                                  ? (IData)(vlSelf->main_tb__DOT__cpu__DOT__branch_wr)
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->main_tb__DOT__cpu__DOT__pc))));
    }
    if (__Vdlyvset__main_tb__DOT__cpu__DOT__regfile__DOT__regs__v1) {
        vlSelf->main_tb__DOT__cpu__DOT__regfile__DOT__regs[0U] = 0U;
        vlSelf->main_tb__DOT__cpu__DOT__regfile__DOT__regs[1U] = 1U;
        vlSelf->main_tb__DOT__cpu__DOT__regfile__DOT__regs[2U] = 2U;
        vlSelf->main_tb__DOT__cpu__DOT__regfile__DOT__regs[3U] = 0U;
    }
    if (vlSelf->sync_rst) {
        vlSelf->main_tb__DOT__cpu__DOT__regoutA = 0U;
        vlSelf->main_tb__DOT__cpu__DOT__regoutB = 0U;
    }
    vlSelf->main_tb__DOT__cpu__DOT__data_A = vlSelf->main_tb__DOT__cpu__DOT__regoutA;
    if (vlSelf->main_tb__DOT__cpu__DOT__mem_read_en) {
        vlSelf->main_tb__DOT__cpu__DOT__mem_data_out_B 
            = vlSelf->main_tb__DOT__cpu__DOT__ram__DOT__ram
            [vlSelf->main_tb__DOT__cpu__DOT__mem_data_addr];
    }
    vlSelf->main_tb__DOT__cpu__DOT__mem_data_out_B 
        = vlSelf->main_tb__DOT__cpu__DOT__ram__DOT__ram
        [vlSelf->main_tb__DOT__cpu__DOT__pc];
    if (vlSelf->sync_rst) {
        vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__prv_imm = 0U;
        vlSelf->main_tb__DOT__cpu__DOT__mem_data_out_B = 0U;
        vlSelf->main_tb__DOT__cpu__DOT__mem_data_out_B = 0U;
    }
    __Vtableidx1 = vlSelf->main_tb__DOT__cpu__DOT__fetched_word;
    vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT____Vcellout__op_rom__instr_t 
        = Vmain_tb__ConstPool__TABLE_h3509a686_0[__Vtableidx1];
    vlSelf->main_tb__DOT__cpu__DOT__pc = __Vdly__main_tb__DOT__cpu__DOT__pc;
    if (__Vdlyvset__main_tb__DOT__cpu__DOT__ram__DOT__ram__v0) {
        vlSelf->main_tb__DOT__cpu__DOT__ram__DOT__ram[__Vdlyvdim0__main_tb__DOT__cpu__DOT__ram__DOT__ram__v0] 
            = __Vdlyvval__main_tb__DOT__cpu__DOT__ram__DOT__ram__v0;
    }
    vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__has_imm = 0U;
    if ((1U & (~ (IData)(vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__prv_imm)))) {
        vlSelf->main_tb__DOT__cpu__DOT__dst = (3U & (IData)(vlSelf->main_tb__DOT__cpu__DOT__fetched_word));
        if ((0U == vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT____Vcellout__op_rom__instr_t)) {
            vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__has_imm = 0U;
            vlSelf->main_tb__DOT__cpu__DOT__read_en_B = 1U;
            vlSelf->main_tb__DOT__cpu__DOT__read_en_A = 1U;
            vlSelf->main_tb__DOT__cpu__DOT__addr_read_A 
                = (3U & (IData)(vlSelf->main_tb__DOT__cpu__DOT__fetched_word));
            vlSelf->main_tb__DOT__cpu__DOT__addr_read_B 
                = (3U & ((IData)(vlSelf->main_tb__DOT__cpu__DOT__fetched_word) 
                         >> 2U));
            vlSelf->main_tb__DOT__cpu__DOT__decoded_opcode 
                = (0xfU & ((IData)(vlSelf->main_tb__DOT__cpu__DOT__fetched_word) 
                           >> 4U));
        } else if ((1U == vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT____Vcellout__op_rom__instr_t)) {
            vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__has_imm = 1U;
            vlSelf->main_tb__DOT__cpu__DOT__read_en_B = 0U;
            vlSelf->main_tb__DOT__cpu__DOT__read_en_A = 1U;
            vlSelf->main_tb__DOT__cpu__DOT__addr_read_A 
                = (3U & (IData)(vlSelf->main_tb__DOT__cpu__DOT__fetched_word));
            vlSelf->main_tb__DOT__cpu__DOT__addr_read_B 
                = (3U & ((IData)(vlSelf->main_tb__DOT__cpu__DOT__fetched_word) 
                         >> 2U));
            vlSelf->main_tb__DOT__cpu__DOT__decoded_opcode = 0U;
            vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__inner_opc 
                = (0xfU & ((IData)(vlSelf->main_tb__DOT__cpu__DOT__fetched_word) 
                           >> 4U));
        } else {
            if ((2U == vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT____Vcellout__op_rom__instr_t)) {
                vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__has_imm = 0U;
                vlSelf->main_tb__DOT__cpu__DOT__read_en_B = 1U;
                vlSelf->main_tb__DOT__cpu__DOT__addr_read_A 
                    = (3U & (IData)(vlSelf->main_tb__DOT__cpu__DOT__fetched_word));
                vlSelf->main_tb__DOT__cpu__DOT__decoded_opcode 
                    = (0x3fU & ((IData)(vlSelf->main_tb__DOT__cpu__DOT__fetched_word) 
                                >> 2U));
            } else if ((3U == vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT____Vcellout__op_rom__instr_t)) {
                vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__has_imm = 1U;
                vlSelf->main_tb__DOT__cpu__DOT__addr_read_A 
                    = (3U & (IData)(vlSelf->main_tb__DOT__cpu__DOT__fetched_word));
                vlSelf->main_tb__DOT__cpu__DOT__decoded_opcode = 0U;
                vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__inner_opc 
                    = (0x3fU & ((IData)(vlSelf->main_tb__DOT__cpu__DOT__fetched_word) 
                                >> 2U));
            }
            if ((2U != vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT____Vcellout__op_rom__instr_t)) {
                if ((3U == vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT____Vcellout__op_rom__instr_t)) {
                    vlSelf->main_tb__DOT__cpu__DOT__read_en_A = 1U;
                }
            }
        }
    }
    if (vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__prv_imm) {
        vlSelf->main_tb__DOT__cpu__DOT__data_B = vlSelf->main_tb__DOT__cpu__DOT__fetched_word;
        vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__has_imm = 0U;
        vlSelf->main_tb__DOT__cpu__DOT__read_en_B = 0U;
        vlSelf->main_tb__DOT__cpu__DOT__read_en_A = 0U;
        vlSelf->main_tb__DOT__cpu__DOT__decoded_opcode 
            = vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__inner_opc;
    } else {
        vlSelf->main_tb__DOT__cpu__DOT__data_B = vlSelf->main_tb__DOT__cpu__DOT__regoutB;
    }
}

void Vmain_tb___024root___eval_nba(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmain_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vmain_tb___024root___eval_triggers__ico(Vmain_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain_tb___024root___dump_triggers__ico(Vmain_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vmain_tb___024root___eval_triggers__act(Vmain_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain_tb___024root___dump_triggers__act(Vmain_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain_tb___024root___dump_triggers__nba(Vmain_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmain_tb___024root___eval(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vmain_tb___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vmain_tb___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("../rtl//../rtl//src/testbench/main_tb.sv", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vmain_tb___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vmain_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmain_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../rtl//../rtl//src/testbench/main_tb.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vmain_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmain_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../rtl//../rtl//src/testbench/main_tb.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmain_tb___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vmain_tb___024root___eval_debug_assertions(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->clk_en & 0xfeU))) {
        Verilated::overWidthError("clk_en");}
    if (VL_UNLIKELY((vlSelf->sync_rst & 0xfeU))) {
        Verilated::overWidthError("sync_rst");}
}
#endif  // VL_DEBUG
