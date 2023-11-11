// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain_tb.h for the primary calling header

#include "verilated.h"

#include "Vmain_tb__Syms.h"
#include "Vmain_tb___024root.h"

VL_ATTR_COLD void Vmain_tb___024root___eval_static(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmain_tb___024root___eval_initial__TOP(Vmain_tb___024root* vlSelf);

VL_ATTR_COLD void Vmain_tb___024root___eval_initial(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___eval_initial\n"); );
    // Body
    Vmain_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__main_tb__DOT__rclk__0 
        = vlSelf->main_tb__DOT__rclk;
}

VL_ATTR_COLD void Vmain_tb___024root___eval_initial__TOP(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___eval_initial__TOP\n"); );
    // Body
    VL_READMEM_N(true, 8, 256, 0, std::string{"ram.mif"}
                 ,  &(vlSelf->main_tb__DOT__cpu__DOT__ram__DOT__ram)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vmain_tb___024root___eval_final(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmain_tb___024root___eval_triggers__stl(Vmain_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain_tb___024root___dump_triggers__stl(Vmain_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmain_tb___024root___eval_stl(Vmain_tb___024root* vlSelf);

VL_ATTR_COLD void Vmain_tb___024root___eval_settle(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vmain_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vmain_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("../rtl//../rtl//src/testbench/main_tb.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vmain_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain_tb___024root___dump_triggers__stl(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<IData/*31:0*/, 256> Vmain_tb__ConstPool__TABLE_h3509a686_0;

VL_ATTR_COLD void Vmain_tb___024root___stl_sequent__TOP__0(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->main_tb__DOT__cpu__DOT__data_A = vlSelf->main_tb__DOT__cpu__DOT__regoutA;
    vlSelf->main_tb__DOT__rclk = ((IData)(vlSelf->clk) 
                                  & (IData)(vlSelf->clk_en));
    __Vtableidx1 = vlSelf->main_tb__DOT__cpu__DOT__fetched_word;
    vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT____Vcellout__op_rom__instr_t 
        = Vmain_tb__ConstPool__TABLE_h3509a686_0[__Vtableidx1];
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

VL_ATTR_COLD void Vmain_tb___024root___eval_stl(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vmain_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain_tb___024root___dump_triggers__ico(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain_tb___024root___dump_triggers__act(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge main_tb.rclk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain_tb___024root___dump_triggers__nba(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge main_tb.rclk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmain_tb___024root___ctor_var_reset(Vmain_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->clk_en = VL_RAND_RESET_I(1);
    vlSelf->sync_rst = VL_RAND_RESET_I(1);
    vlSelf->main_tb__DOT__rclk = VL_RAND_RESET_I(1);
    vlSelf->main_tb__DOT__cpu__DOT__read_en_A = VL_RAND_RESET_I(1);
    vlSelf->main_tb__DOT__cpu__DOT__read_en_B = VL_RAND_RESET_I(1);
    vlSelf->main_tb__DOT__cpu__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->main_tb__DOT__cpu__DOT__addr_read_A = VL_RAND_RESET_I(2);
    vlSelf->main_tb__DOT__cpu__DOT__addr_read_B = VL_RAND_RESET_I(2);
    vlSelf->main_tb__DOT__cpu__DOT__addr_write = VL_RAND_RESET_I(2);
    vlSelf->main_tb__DOT__cpu__DOT__regoutA = VL_RAND_RESET_I(8);
    vlSelf->main_tb__DOT__cpu__DOT__regoutB = VL_RAND_RESET_I(8);
    vlSelf->main_tb__DOT__cpu__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->main_tb__DOT__cpu__DOT__pc = VL_RAND_RESET_I(8);
    vlSelf->main_tb__DOT__cpu__DOT__mem_read_en = VL_RAND_RESET_I(1);
    vlSelf->main_tb__DOT__cpu__DOT__mem_data_out_A = VL_RAND_RESET_I(8);
    vlSelf->main_tb__DOT__cpu__DOT__mem_data_out_B = VL_RAND_RESET_I(8);
    vlSelf->main_tb__DOT__cpu__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->main_tb__DOT__cpu__DOT__mem_wr_addr = VL_RAND_RESET_I(8);
    vlSelf->main_tb__DOT__cpu__DOT__mem_data_addr = VL_RAND_RESET_I(8);
    vlSelf->main_tb__DOT__cpu__DOT__branch_wr = VL_RAND_RESET_I(8);
    vlSelf->main_tb__DOT__cpu__DOT__branch_wr_en = VL_RAND_RESET_I(1);
    vlSelf->main_tb__DOT__cpu__DOT__fetched_word = VL_RAND_RESET_I(8);
    vlSelf->main_tb__DOT__cpu__DOT__stall_decode = VL_RAND_RESET_I(1);
    vlSelf->main_tb__DOT__cpu__DOT__dst = VL_RAND_RESET_I(2);
    vlSelf->main_tb__DOT__cpu__DOT__data_A = VL_RAND_RESET_I(8);
    vlSelf->main_tb__DOT__cpu__DOT__data_B = VL_RAND_RESET_I(8);
    vlSelf->main_tb__DOT__cpu__DOT__decoded_opcode = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->main_tb__DOT__cpu__DOT__ram__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->main_tb__DOT__cpu__DOT__regfile__DOT__regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__has_imm = VL_RAND_RESET_I(1);
    vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__prv_imm = VL_RAND_RESET_I(1);
    vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__inner_opc = VL_RAND_RESET_I(8);
    vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT____Vcellout__op_rom__instr_t = 0;
    vlSelf->main_tb__DOT__cpu__DOT__decode_stage__DOT__op_rom__DOT__instr_t_inner = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__main_tb__DOT__rclk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
