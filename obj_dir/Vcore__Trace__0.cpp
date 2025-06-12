// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore__Syms.h"


void Vcore___024root__trace_chg_0_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcore___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_0\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcore___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcore___024root__trace_chg_0_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_0_sub_0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.core__DOT__fpadd_in1),32);
        bufp->chgIData(oldp+1,(vlSelfRef.core__DOT__fpadd_in2),32);
        bufp->chgBit(oldp+2,((vlSelfRef.core__DOT__fpadd_in1 
                              >> 0x1fU)));
        bufp->chgCData(oldp+3,((0xffU & (vlSelfRef.core__DOT__fpadd_in1 
                                         >> 0x17U))),8);
        bufp->chgIData(oldp+4,((0x800000U | (0x7fffffU 
                                             & vlSelfRef.core__DOT__fpadd_in1))),24);
        bufp->chgBit(oldp+5,((vlSelfRef.core__DOT__fpadd_in2 
                              >> 0x1fU)));
        bufp->chgCData(oldp+6,((0xffU & (vlSelfRef.core__DOT__fpadd_in2 
                                         >> 0x17U))),8);
        bufp->chgIData(oldp+7,((0x800000U | (0x7fffffU 
                                             & vlSelfRef.core__DOT__fpadd_in2))),24);
        bufp->chgBit(oldp+8,(vlSelfRef.core__DOT__fpadd0__DOT__in1_ge));
        bufp->chgCData(oldp+9,(vlSelfRef.core__DOT__fpadd0__DOT__exponent_diff),8);
        bufp->chgIData(oldp+10,((0xffffffU & ((IData)(vlSelfRef.core__DOT__fpadd0__DOT__in1_ge)
                                               ? (0x800000U 
                                                  | (0x7fffffU 
                                                     & vlSelfRef.core__DOT__fpadd_in1))
                                               : VL_SHIFTR_III(24,24,8, 
                                                               (0x800000U 
                                                                | (0x7fffffU 
                                                                   & vlSelfRef.core__DOT__fpadd_in1)), (IData)(vlSelfRef.core__DOT__fpadd0__DOT__exponent_diff))))),24);
        bufp->chgIData(oldp+11,((0xffffffU & ((IData)(vlSelfRef.core__DOT__fpadd0__DOT__in1_ge)
                                               ? VL_SHIFTR_III(24,24,8, 
                                                               (0x800000U 
                                                                | (0x7fffffU 
                                                                   & vlSelfRef.core__DOT__fpadd_in2)), (IData)(vlSelfRef.core__DOT__fpadd0__DOT__exponent_diff))
                                               : (0x800000U 
                                                  | (0x7fffffU 
                                                     & vlSelfRef.core__DOT__fpadd_in2))))),24);
        bufp->chgCData(oldp+12,((0xffU & ((IData)(vlSelfRef.core__DOT__fpadd0__DOT__in1_ge)
                                           ? (vlSelfRef.core__DOT__fpadd_in1 
                                              >> 0x17U)
                                           : (vlSelfRef.core__DOT__fpadd_in2 
                                              >> 0x17U)))),8);
        bufp->chgIData(oldp+13,(vlSelfRef.core__DOT__fpadd0__DOT__unsigned_adder),25);
        bufp->chgIData(oldp+14,((0x7fffffU & ((0x1000000U 
                                               & vlSelfRef.core__DOT__fpadd0__DOT__unsigned_adder)
                                               ? (vlSelfRef.core__DOT__fpadd0__DOT__unsigned_adder 
                                                  >> 1U)
                                               : vlSelfRef.core__DOT__fpadd0__DOT__unsigned_adder))),23);
        bufp->chgCData(oldp+15,((0xffU & (((IData)(vlSelfRef.core__DOT__fpadd0__DOT__in1_ge)
                                            ? (vlSelfRef.core__DOT__fpadd_in1 
                                               >> 0x17U)
                                            : (vlSelfRef.core__DOT__fpadd_in2 
                                               >> 0x17U)) 
                                          + (1U & (vlSelfRef.core__DOT__fpadd0__DOT__unsigned_adder 
                                                   >> 0x18U))))),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+16,(vlSelfRef.core__DOT__pc_p0),32);
        bufp->chgIData(oldp+17,(vlSelfRef.core__DOT__imem__DOT__x
                                [(0xffU & vlSelfRef.core__DOT__pc_p0)]),32);
        bufp->chgCData(oldp+18,((0xffU & vlSelfRef.core__DOT__pc_p0)),8);
        bufp->chgIData(oldp+19,(vlSelfRef.core__DOT__fpadd_result),32);
        bufp->chgIData(oldp+20,(((IData)(4U) + vlSelfRef.core__DOT__pc_p0)),32);
    }
    bufp->chgBit(oldp+21,(vlSelfRef.clk));
    bufp->chgBit(oldp+22,(vlSelfRef.rst));
}

void Vcore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_cleanup\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
