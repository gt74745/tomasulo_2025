// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"
#include "Vcore__Syms.h"
#include "Vcore___024root.h"

VL_ATTR_COLD void Vcore___024root___eval_initial__TOP(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_initial__TOP\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelfRef.core__DOT__fpadd_in1 = 0xc90fd0U;
    vlSelfRef.core__DOT__fpadd_in2 = 0x3504f3U;
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6d6f7279U;
    __Vtemp_1[2U] = 0x6e5f6d65U;
    __Vtemp_1[3U] = 0x6374696fU;
    __Vtemp_1[4U] = 0x73747275U;
    __Vtemp_1[5U] = 0x696eU;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_1)
                 ,  &(vlSelfRef.core__DOT__imem__DOT__x)
                 , 0, ~0ULL);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__stl(Vcore___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcore___024root___eval_triggers__stl(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_triggers__stl\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcore___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
