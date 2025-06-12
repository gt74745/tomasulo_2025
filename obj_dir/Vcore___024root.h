// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE___024ROOT_H_
#define VERILATED_VCORE___024ROOT_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ core__DOT__fpadd0__DOT__in1_ge;
    CData/*7:0*/ core__DOT__fpadd0__DOT__exponent_diff;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ core__DOT__pc_p0;
    IData/*31:0*/ core__DOT__fpadd_in1;
    IData/*31:0*/ core__DOT__fpadd_in2;
    IData/*31:0*/ core__DOT__fpadd_result;
    IData/*31:0*/ core__DOT__fetch__DOT__pc_plus4;
    IData/*24:0*/ core__DOT__fpadd0__DOT__unsigned_adder;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> core__DOT__imem__DOT__x;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore___024root(Vcore__Syms* symsp, const char* v__name);
    ~Vcore___024root();
    VL_UNCOPYABLE(Vcore___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
