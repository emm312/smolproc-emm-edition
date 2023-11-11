// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain_tb.h for the primary calling header

#include "verilated.h"

#include "Vmain_tb__Syms.h"
#include "Vmain_tb__Syms.h"
#include "Vmain_tb___024unit.h"

void Vmain_tb___024unit___ctor_var_reset(Vmain_tb___024unit* vlSelf);

Vmain_tb___024unit::Vmain_tb___024unit(Vmain_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmain_tb___024unit___ctor_var_reset(this);
}

void Vmain_tb___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmain_tb___024unit::~Vmain_tb___024unit() {
}
