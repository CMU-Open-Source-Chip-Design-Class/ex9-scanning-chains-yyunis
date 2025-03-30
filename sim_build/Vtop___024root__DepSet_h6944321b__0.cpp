// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ adder__DOT____VdfgRegularize_h7f497724_0_0;
    adder__DOT____VdfgRegularize_h7f497724_0_0 = 0;
    CData/*2:0*/ adder__DOT____VdfgRegularize_h7f497724_0_1;
    adder__DOT____VdfgRegularize_h7f497724_0_1 = 0;
    CData/*3:0*/ adder__DOT____VdfgRegularize_h7f497724_0_2;
    adder__DOT____VdfgRegularize_h7f497724_0_2 = 0;
    CData/*1:0*/ adder__DOT____VdfgRegularize_h7f497724_0_3;
    adder__DOT____VdfgRegularize_h7f497724_0_3 = 0;
    CData/*2:0*/ adder__DOT____VdfgRegularize_h7f497724_0_4;
    adder__DOT____VdfgRegularize_h7f497724_0_4 = 0;
    CData/*3:0*/ adder__DOT____VdfgRegularize_h7f497724_0_5;
    adder__DOT____VdfgRegularize_h7f497724_0_5 = 0;
    // Body
    vlSelfRef.adder__DOT__a_in = vlSelfRef.a_in;
    vlSelfRef.adder__DOT__b_in = vlSelfRef.b_in;
    vlSelfRef.adder__DOT__clk = vlSelfRef.clk;
    vlSelfRef.adder__DOT__scan_in = vlSelfRef.scan_in;
    vlSelfRef.adder__DOT__scan_en = vlSelfRef.scan_en;
    vlSelfRef.x_out = vlSelfRef.adder__DOT__x_out;
    vlSelfRef.scan_out = vlSelfRef.adder__DOT__scan_out;
    vlSelfRef.adder__DOT__b_reg__05b3__05d = vlSelfRef.adder__DOT__scan_out;
    vlSelfRef.adder__DOT___00_ = (1U & ((IData)(vlSelfRef.adder__DOT__a_reg__05b0__05d) 
                                        + (IData)(vlSelfRef.adder__DOT__b_reg__05b0__05d)));
    adder__DOT____VdfgRegularize_h7f497724_0_0 = (((IData)(vlSelfRef.adder__DOT__a_reg__05b1__05d) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.adder__DOT__a_reg__05b0__05d));
    adder__DOT____VdfgRegularize_h7f497724_0_3 = (((IData)(vlSelfRef.adder__DOT__b_reg__05b1__05d) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.adder__DOT__b_reg__05b0__05d));
    adder__DOT____VdfgRegularize_h7f497724_0_1 = (((IData)(vlSelfRef.adder__DOT__a_reg__05b2__05d) 
                                                   << 2U) 
                                                  | (IData)(adder__DOT____VdfgRegularize_h7f497724_0_0));
    vlSelfRef.adder__DOT___01_ = (1U & (((IData)(adder__DOT____VdfgRegularize_h7f497724_0_0) 
                                         + (IData)(adder__DOT____VdfgRegularize_h7f497724_0_3)) 
                                        >> 1U));
    adder__DOT____VdfgRegularize_h7f497724_0_4 = (((IData)(vlSelfRef.adder__DOT__b_reg__05b2__05d) 
                                                   << 2U) 
                                                  | (IData)(adder__DOT____VdfgRegularize_h7f497724_0_3));
    adder__DOT____VdfgRegularize_h7f497724_0_2 = (((IData)(vlSelfRef.adder__DOT__a_reg__05b3__05d) 
                                                   << 3U) 
                                                  | (IData)(adder__DOT____VdfgRegularize_h7f497724_0_1));
    vlSelfRef.adder__DOT___02_ = (1U & (((IData)(adder__DOT____VdfgRegularize_h7f497724_0_1) 
                                         + (IData)(adder__DOT____VdfgRegularize_h7f497724_0_4)) 
                                        >> 2U));
    adder__DOT____VdfgRegularize_h7f497724_0_5 = (((IData)(vlSelfRef.adder__DOT__scan_out) 
                                                   << 3U) 
                                                  | (IData)(adder__DOT____VdfgRegularize_h7f497724_0_4));
    vlSelfRef.adder__DOT___04_ = (1U & (((IData)(adder__DOT____VdfgRegularize_h7f497724_0_2) 
                                         + (IData)(adder__DOT____VdfgRegularize_h7f497724_0_5)) 
                                        >> 4U));
    vlSelfRef.adder__DOT___03_ = (1U & (((IData)(adder__DOT____VdfgRegularize_h7f497724_0_2) 
                                         + (IData)(adder__DOT____VdfgRegularize_h7f497724_0_5)) 
                                        >> 3U));
    if (vlSelfRef.scan_en) {
        vlSelfRef.adder__DOT___16_ = (1U & ((IData)(vlSelfRef.adder__DOT__x_out) 
                                            >> 4U));
        vlSelfRef.adder__DOT___15_ = (1U & (IData)(vlSelfRef.adder__DOT__a_reg__05b0__05d));
        vlSelfRef.adder__DOT___14_ = (1U & (IData)(vlSelfRef.adder__DOT__a_reg__05b1__05d));
        vlSelfRef.adder__DOT___13_ = (1U & (IData)(vlSelfRef.adder__DOT__a_reg__05b2__05d));
        vlSelfRef.adder__DOT___12_ = (1U & (IData)(vlSelfRef.adder__DOT__a_reg__05b3__05d));
        vlSelfRef.adder__DOT___11_ = (1U & (IData)(vlSelfRef.adder__DOT__b_reg__05b0__05d));
        vlSelfRef.adder__DOT___10_ = (1U & (IData)(vlSelfRef.adder__DOT__b_reg__05b1__05d));
        vlSelfRef.adder__DOT___05_ = (1U & (IData)(vlSelfRef.adder__DOT__b_reg__05b2__05d));
        vlSelfRef.adder__DOT___09_ = vlSelfRef.scan_in;
        vlSelfRef.adder__DOT___08_ = (1U & (IData)(vlSelfRef.adder__DOT__x_out));
        vlSelfRef.adder__DOT___07_ = (1U & ((IData)(vlSelfRef.adder__DOT__x_out) 
                                            >> 1U));
        vlSelfRef.adder__DOT___17_ = (1U & ((IData)(vlSelfRef.adder__DOT__x_out) 
                                            >> 3U));
        vlSelfRef.adder__DOT___06_ = (1U & ((IData)(vlSelfRef.adder__DOT__x_out) 
                                            >> 2U));
    } else {
        vlSelfRef.adder__DOT___16_ = (1U & (IData)(vlSelfRef.a_in));
        vlSelfRef.adder__DOT___15_ = (1U & ((IData)(vlSelfRef.a_in) 
                                            >> 1U));
        vlSelfRef.adder__DOT___14_ = (1U & ((IData)(vlSelfRef.a_in) 
                                            >> 2U));
        vlSelfRef.adder__DOT___13_ = (1U & ((IData)(vlSelfRef.a_in) 
                                            >> 3U));
        vlSelfRef.adder__DOT___12_ = (1U & (IData)(vlSelfRef.b_in));
        vlSelfRef.adder__DOT___11_ = (1U & ((IData)(vlSelfRef.b_in) 
                                            >> 1U));
        vlSelfRef.adder__DOT___10_ = (1U & ((IData)(vlSelfRef.b_in) 
                                            >> 2U));
        vlSelfRef.adder__DOT___05_ = (1U & ((IData)(vlSelfRef.b_in) 
                                            >> 3U));
        vlSelfRef.adder__DOT___09_ = vlSelfRef.adder__DOT___00_;
        vlSelfRef.adder__DOT___08_ = (1U & (IData)(vlSelfRef.adder__DOT___01_));
        vlSelfRef.adder__DOT___07_ = (1U & (IData)(vlSelfRef.adder__DOT___02_));
        vlSelfRef.adder__DOT___17_ = (1U & (IData)(vlSelfRef.adder__DOT___04_));
        vlSelfRef.adder__DOT___06_ = (1U & (IData)(vlSelfRef.adder__DOT___03_));
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ adder__DOT____VdfgRegularize_h7f497724_0_0;
    adder__DOT____VdfgRegularize_h7f497724_0_0 = 0;
    CData/*2:0*/ adder__DOT____VdfgRegularize_h7f497724_0_1;
    adder__DOT____VdfgRegularize_h7f497724_0_1 = 0;
    CData/*3:0*/ adder__DOT____VdfgRegularize_h7f497724_0_2;
    adder__DOT____VdfgRegularize_h7f497724_0_2 = 0;
    CData/*1:0*/ adder__DOT____VdfgRegularize_h7f497724_0_3;
    adder__DOT____VdfgRegularize_h7f497724_0_3 = 0;
    CData/*2:0*/ adder__DOT____VdfgRegularize_h7f497724_0_4;
    adder__DOT____VdfgRegularize_h7f497724_0_4 = 0;
    CData/*3:0*/ adder__DOT____VdfgRegularize_h7f497724_0_5;
    adder__DOT____VdfgRegularize_h7f497724_0_5 = 0;
    // Body
    vlSelfRef.adder__DOT__a_reg__05b3__05d = vlSelfRef.adder__DOT___13_;
    vlSelfRef.adder__DOT__scan_out = vlSelfRef.adder__DOT___05_;
    vlSelfRef.adder__DOT__a_reg__05b2__05d = vlSelfRef.adder__DOT___14_;
    vlSelfRef.adder__DOT__b_reg__05b2__05d = vlSelfRef.adder__DOT___10_;
    vlSelfRef.adder__DOT__x_out = ((((IData)(vlSelfRef.adder__DOT___17_) 
                                     << 4U) | (((IData)(vlSelfRef.adder__DOT___06_) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.adder__DOT___07_) 
                                                  << 2U))) 
                                   | (((IData)(vlSelfRef.adder__DOT___08_) 
                                       << 1U) | (IData)(vlSelfRef.adder__DOT___09_)));
    vlSelfRef.adder__DOT__a_reg__05b1__05d = vlSelfRef.adder__DOT___15_;
    vlSelfRef.adder__DOT__b_reg__05b1__05d = vlSelfRef.adder__DOT___11_;
    vlSelfRef.adder__DOT__a_reg__05b0__05d = vlSelfRef.adder__DOT___16_;
    vlSelfRef.adder__DOT__b_reg__05b0__05d = vlSelfRef.adder__DOT___12_;
    vlSelfRef.scan_out = vlSelfRef.adder__DOT__scan_out;
    vlSelfRef.adder__DOT__b_reg__05b3__05d = vlSelfRef.adder__DOT__scan_out;
    vlSelfRef.x_out = vlSelfRef.adder__DOT__x_out;
    adder__DOT____VdfgRegularize_h7f497724_0_0 = (((IData)(vlSelfRef.adder__DOT__a_reg__05b1__05d) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.adder__DOT__a_reg__05b0__05d));
    vlSelfRef.adder__DOT___00_ = (1U & ((IData)(vlSelfRef.adder__DOT__a_reg__05b0__05d) 
                                        + (IData)(vlSelfRef.adder__DOT__b_reg__05b0__05d)));
    adder__DOT____VdfgRegularize_h7f497724_0_3 = (((IData)(vlSelfRef.adder__DOT__b_reg__05b1__05d) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.adder__DOT__b_reg__05b0__05d));
    adder__DOT____VdfgRegularize_h7f497724_0_1 = (((IData)(vlSelfRef.adder__DOT__a_reg__05b2__05d) 
                                                   << 2U) 
                                                  | (IData)(adder__DOT____VdfgRegularize_h7f497724_0_0));
    vlSelfRef.adder__DOT___01_ = (1U & (((IData)(adder__DOT____VdfgRegularize_h7f497724_0_0) 
                                         + (IData)(adder__DOT____VdfgRegularize_h7f497724_0_3)) 
                                        >> 1U));
    adder__DOT____VdfgRegularize_h7f497724_0_4 = (((IData)(vlSelfRef.adder__DOT__b_reg__05b2__05d) 
                                                   << 2U) 
                                                  | (IData)(adder__DOT____VdfgRegularize_h7f497724_0_3));
    adder__DOT____VdfgRegularize_h7f497724_0_2 = (((IData)(vlSelfRef.adder__DOT__a_reg__05b3__05d) 
                                                   << 3U) 
                                                  | (IData)(adder__DOT____VdfgRegularize_h7f497724_0_1));
    vlSelfRef.adder__DOT___02_ = (1U & (((IData)(adder__DOT____VdfgRegularize_h7f497724_0_1) 
                                         + (IData)(adder__DOT____VdfgRegularize_h7f497724_0_4)) 
                                        >> 2U));
    adder__DOT____VdfgRegularize_h7f497724_0_5 = (((IData)(vlSelfRef.adder__DOT__scan_out) 
                                                   << 3U) 
                                                  | (IData)(adder__DOT____VdfgRegularize_h7f497724_0_4));
    vlSelfRef.adder__DOT___04_ = (1U & (((IData)(adder__DOT____VdfgRegularize_h7f497724_0_2) 
                                         + (IData)(adder__DOT____VdfgRegularize_h7f497724_0_5)) 
                                        >> 4U));
    vlSelfRef.adder__DOT___03_ = (1U & (((IData)(adder__DOT____VdfgRegularize_h7f497724_0_2) 
                                         + (IData)(adder__DOT____VdfgRegularize_h7f497724_0_5)) 
                                        >> 3U));
    if (vlSelfRef.scan_en) {
        vlSelfRef.adder__DOT___12_ = (1U & (IData)(vlSelfRef.adder__DOT__a_reg__05b3__05d));
        vlSelfRef.adder__DOT___13_ = (1U & (IData)(vlSelfRef.adder__DOT__a_reg__05b2__05d));
        vlSelfRef.adder__DOT___05_ = (1U & (IData)(vlSelfRef.adder__DOT__b_reg__05b2__05d));
        vlSelfRef.adder__DOT___16_ = (1U & ((IData)(vlSelfRef.adder__DOT__x_out) 
                                            >> 4U));
        vlSelfRef.adder__DOT___14_ = (1U & (IData)(vlSelfRef.adder__DOT__a_reg__05b1__05d));
        vlSelfRef.adder__DOT___10_ = (1U & (IData)(vlSelfRef.adder__DOT__b_reg__05b1__05d));
        vlSelfRef.adder__DOT___15_ = (1U & (IData)(vlSelfRef.adder__DOT__a_reg__05b0__05d));
        vlSelfRef.adder__DOT___11_ = (1U & (IData)(vlSelfRef.adder__DOT__b_reg__05b0__05d));
        vlSelfRef.adder__DOT___09_ = vlSelfRef.scan_in;
        vlSelfRef.adder__DOT___08_ = (1U & (IData)(vlSelfRef.adder__DOT__x_out));
        vlSelfRef.adder__DOT___07_ = (1U & ((IData)(vlSelfRef.adder__DOT__x_out) 
                                            >> 1U));
        vlSelfRef.adder__DOT___17_ = (1U & ((IData)(vlSelfRef.adder__DOT__x_out) 
                                            >> 3U));
        vlSelfRef.adder__DOT___06_ = (1U & ((IData)(vlSelfRef.adder__DOT__x_out) 
                                            >> 2U));
    } else {
        vlSelfRef.adder__DOT___12_ = (1U & (IData)(vlSelfRef.b_in));
        vlSelfRef.adder__DOT___13_ = (1U & ((IData)(vlSelfRef.a_in) 
                                            >> 3U));
        vlSelfRef.adder__DOT___05_ = (1U & ((IData)(vlSelfRef.b_in) 
                                            >> 3U));
        vlSelfRef.adder__DOT___16_ = (1U & (IData)(vlSelfRef.a_in));
        vlSelfRef.adder__DOT___14_ = (1U & ((IData)(vlSelfRef.a_in) 
                                            >> 2U));
        vlSelfRef.adder__DOT___10_ = (1U & ((IData)(vlSelfRef.b_in) 
                                            >> 2U));
        vlSelfRef.adder__DOT___15_ = (1U & ((IData)(vlSelfRef.a_in) 
                                            >> 1U));
        vlSelfRef.adder__DOT___11_ = (1U & ((IData)(vlSelfRef.b_in) 
                                            >> 1U));
        vlSelfRef.adder__DOT___09_ = vlSelfRef.adder__DOT___00_;
        vlSelfRef.adder__DOT___08_ = (1U & (IData)(vlSelfRef.adder__DOT___01_));
        vlSelfRef.adder__DOT___07_ = (1U & (IData)(vlSelfRef.adder__DOT___02_));
        vlSelfRef.adder__DOT___17_ = (1U & (IData)(vlSelfRef.adder__DOT___04_));
        vlSelfRef.adder__DOT___06_ = (1U & (IData)(vlSelfRef.adder__DOT___03_));
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/Users/eunicelee/Desktop/CMU/18224/ex9-scanning-chains-yyunis/adder/adder_out.sv", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/Users/eunicelee/Desktop/CMU/18224/ex9-scanning-chains-yyunis/adder/adder_out.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/Users/eunicelee/Desktop/CMU/18224/ex9-scanning-chains-yyunis/adder/adder_out.sv", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.a_in & 0xf0U)))) {
        Verilated::overWidthError("a_in");}
    if (VL_UNLIKELY(((vlSelfRef.b_in & 0xf0U)))) {
        Verilated::overWidthError("b_in");}
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.scan_in & 0xfeU)))) {
        Verilated::overWidthError("scan_in");}
    if (VL_UNLIKELY(((vlSelfRef.scan_en & 0xfeU)))) {
        Verilated::overWidthError("scan_en");}
}
#endif  // VL_DEBUG
