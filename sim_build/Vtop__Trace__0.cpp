// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.a_in),4);
    bufp->chgCData(oldp+1,(vlSelfRef.b_in),4);
    bufp->chgBit(oldp+2,(vlSelfRef.clk));
    bufp->chgBit(oldp+3,(vlSelfRef.scan_en));
    bufp->chgBit(oldp+4,(vlSelfRef.scan_in));
    bufp->chgBit(oldp+5,(vlSelfRef.scan_out));
    bufp->chgCData(oldp+6,(vlSelfRef.x_out),5);
    bufp->chgCData(oldp+7,(vlSelfRef.adder__DOT__a_in),4);
    bufp->chgBit(oldp+8,(vlSelfRef.adder__DOT__a_reg__05b0__05d));
    bufp->chgBit(oldp+9,(vlSelfRef.adder__DOT__a_reg__05b1__05d));
    bufp->chgBit(oldp+10,(vlSelfRef.adder__DOT__a_reg__05b2__05d));
    bufp->chgBit(oldp+11,(vlSelfRef.adder__DOT__a_reg__05b3__05d));
    bufp->chgCData(oldp+12,(vlSelfRef.adder__DOT__b_in),4);
    bufp->chgBit(oldp+13,(vlSelfRef.adder__DOT__b_reg__05b0__05d));
    bufp->chgBit(oldp+14,(vlSelfRef.adder__DOT__b_reg__05b1__05d));
    bufp->chgBit(oldp+15,(vlSelfRef.adder__DOT__b_reg__05b2__05d));
    bufp->chgBit(oldp+16,(vlSelfRef.adder__DOT__b_reg__05b3__05d));
    bufp->chgBit(oldp+17,(vlSelfRef.adder__DOT__clk));
    bufp->chgBit(oldp+18,(vlSelfRef.adder__DOT__scan_en));
    bufp->chgBit(oldp+19,(vlSelfRef.adder__DOT__scan_in));
    bufp->chgBit(oldp+20,(vlSelfRef.adder__DOT__scan_out));
    bufp->chgCData(oldp+21,(vlSelfRef.adder__DOT__x_out),5);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
