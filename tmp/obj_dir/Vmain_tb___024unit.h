// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmain_tb.h for the primary calling header

#ifndef VERILATED_VMAIN_TB___024UNIT_H_
#define VERILATED_VMAIN_TB___024UNIT_H_  // guard

#include "verilated.h"


class Vmain_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmain_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vmain_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmain_tb___024unit(Vmain_tb__Syms* symsp, const char* v__name);
    ~Vmain_tb___024unit();
    VL_UNCOPYABLE(Vmain_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
