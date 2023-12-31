// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// Loss
double Loss(double dY, double dQ, double dTau, bool smooth);
RcppExport SEXP _DMQ_Loss(SEXP dYSEXP, SEXP dQSEXP, SEXP dTauSEXP, SEXP smoothSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type dY(dYSEXP);
    Rcpp::traits::input_parameter< double >::type dQ(dQSEXP);
    Rcpp::traits::input_parameter< double >::type dTau(dTauSEXP);
    Rcpp::traits::input_parameter< bool >::type smooth(smoothSEXP);
    rcpp_result_gen = Rcpp::wrap(Loss(dY, dQ, dTau, smooth));
    return rcpp_result_gen;
END_RCPP
}
// dHit
double dHit(double dY, double dQ, double dTau, bool smooth);
RcppExport SEXP _DMQ_dHit(SEXP dYSEXP, SEXP dQSEXP, SEXP dTauSEXP, SEXP smoothSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type dY(dYSEXP);
    Rcpp::traits::input_parameter< double >::type dQ(dQSEXP);
    Rcpp::traits::input_parameter< double >::type dTau(dTauSEXP);
    Rcpp::traits::input_parameter< bool >::type smooth(smoothSEXP);
    rcpp_result_gen = Rcpp::wrap(dHit(dY, dQ, dTau, smooth));
    return rcpp_result_gen;
END_RCPP
}
// FilterDMQ
List FilterDMQ(arma::vec vY, arma::vec vTau, arma::vec vQ_0, int iTau_star, double dBeta, double dAlpha, double dGamma, double dPhi, std::string ScalingType, arma::vec vVar, bool smooth);
RcppExport SEXP _DMQ_FilterDMQ(SEXP vYSEXP, SEXP vTauSEXP, SEXP vQ_0SEXP, SEXP iTau_starSEXP, SEXP dBetaSEXP, SEXP dAlphaSEXP, SEXP dGammaSEXP, SEXP dPhiSEXP, SEXP ScalingTypeSEXP, SEXP vVarSEXP, SEXP smoothSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type vY(vYSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vTau(vTauSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vQ_0(vQ_0SEXP);
    Rcpp::traits::input_parameter< int >::type iTau_star(iTau_starSEXP);
    Rcpp::traits::input_parameter< double >::type dBeta(dBetaSEXP);
    Rcpp::traits::input_parameter< double >::type dAlpha(dAlphaSEXP);
    Rcpp::traits::input_parameter< double >::type dGamma(dGammaSEXP);
    Rcpp::traits::input_parameter< double >::type dPhi(dPhiSEXP);
    Rcpp::traits::input_parameter< std::string >::type ScalingType(ScalingTypeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vVar(vVarSEXP);
    Rcpp::traits::input_parameter< bool >::type smooth(smoothSEXP);
    rcpp_result_gen = Rcpp::wrap(FilterDMQ(vY, vTau, vQ_0, iTau_star, dBeta, dAlpha, dGamma, dPhi, ScalingType, vVar, smooth));
    return rcpp_result_gen;
END_RCPP
}
// XiPrediction
arma::mat XiPrediction(arma::vec vXi_bar, arma::vec vTau, int iH, arma::vec vEta_tp1, double dPhi, double dGamma, int iTau_star, arma::vec vScaling);
RcppExport SEXP _DMQ_XiPrediction(SEXP vXi_barSEXP, SEXP vTauSEXP, SEXP iHSEXP, SEXP vEta_tp1SEXP, SEXP dPhiSEXP, SEXP dGammaSEXP, SEXP iTau_starSEXP, SEXP vScalingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type vXi_bar(vXi_barSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vTau(vTauSEXP);
    Rcpp::traits::input_parameter< int >::type iH(iHSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vEta_tp1(vEta_tp1SEXP);
    Rcpp::traits::input_parameter< double >::type dPhi(dPhiSEXP);
    Rcpp::traits::input_parameter< double >::type dGamma(dGammaSEXP);
    Rcpp::traits::input_parameter< int >::type iTau_star(iTau_starSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vScaling(vScalingSEXP);
    rcpp_result_gen = Rcpp::wrap(XiPrediction(vXi_bar, vTau, iH, vEta_tp1, dPhi, dGamma, iTau_star, vScaling));
    return rcpp_result_gen;
END_RCPP
}
// ReferencePrediction
arma::vec ReferencePrediction(int iH, double dQ_bar, double dBeta, double dAlpha, double dQ_tp1);
RcppExport SEXP _DMQ_ReferencePrediction(SEXP iHSEXP, SEXP dQ_barSEXP, SEXP dBetaSEXP, SEXP dAlphaSEXP, SEXP dQ_tp1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type iH(iHSEXP);
    Rcpp::traits::input_parameter< double >::type dQ_bar(dQ_barSEXP);
    Rcpp::traits::input_parameter< double >::type dBeta(dBetaSEXP);
    Rcpp::traits::input_parameter< double >::type dAlpha(dAlphaSEXP);
    Rcpp::traits::input_parameter< double >::type dQ_tp1(dQ_tp1SEXP);
    rcpp_result_gen = Rcpp::wrap(ReferencePrediction(iH, dQ_bar, dBeta, dAlpha, dQ_tp1));
    return rcpp_result_gen;
END_RCPP
}
// Sim_C
double Sim_C(arma::vec vQ, arma::vec vCDF);
RcppExport SEXP _DMQ_Sim_C(SEXP vQSEXP, SEXP vCDFSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type vQ(vQSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vCDF(vCDFSEXP);
    rcpp_result_gen = Rcpp::wrap(Sim_C(vQ, vCDF));
    return rcpp_result_gen;
END_RCPP
}
// Simulate_DMQ_C
List Simulate_DMQ_C(int iT, arma::vec vTau, arma::vec vQ_0, Function fSim, int iTau_star, double dBeta, double dAlpha, double dGamma, double dPhi, std::string ScalingType, arma::vec vVar);
RcppExport SEXP _DMQ_Simulate_DMQ_C(SEXP iTSEXP, SEXP vTauSEXP, SEXP vQ_0SEXP, SEXP fSimSEXP, SEXP iTau_starSEXP, SEXP dBetaSEXP, SEXP dAlphaSEXP, SEXP dGammaSEXP, SEXP dPhiSEXP, SEXP ScalingTypeSEXP, SEXP vVarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type iT(iTSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vTau(vTauSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vQ_0(vQ_0SEXP);
    Rcpp::traits::input_parameter< Function >::type fSim(fSimSEXP);
    Rcpp::traits::input_parameter< int >::type iTau_star(iTau_starSEXP);
    Rcpp::traits::input_parameter< double >::type dBeta(dBetaSEXP);
    Rcpp::traits::input_parameter< double >::type dAlpha(dAlphaSEXP);
    Rcpp::traits::input_parameter< double >::type dGamma(dGammaSEXP);
    Rcpp::traits::input_parameter< double >::type dPhi(dPhiSEXP);
    Rcpp::traits::input_parameter< std::string >::type ScalingType(ScalingTypeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vVar(vVarSEXP);
    rcpp_result_gen = Rcpp::wrap(Simulate_DMQ_C(iT, vTau, vQ_0, fSim, iTau_star, dBeta, dAlpha, dGamma, dPhi, ScalingType, vVar));
    return rcpp_result_gen;
END_RCPP
}
// Find_Xi0
arma::vec Find_Xi0(arma::vec vQ_0, arma::vec vTau, double dPhi, double dGamma, int iTau_star, arma::vec vScaling);
RcppExport SEXP _DMQ_Find_Xi0(SEXP vQ_0SEXP, SEXP vTauSEXP, SEXP dPhiSEXP, SEXP dGammaSEXP, SEXP iTau_starSEXP, SEXP vScalingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type vQ_0(vQ_0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vTau(vTauSEXP);
    Rcpp::traits::input_parameter< double >::type dPhi(dPhiSEXP);
    Rcpp::traits::input_parameter< double >::type dGamma(dGammaSEXP);
    Rcpp::traits::input_parameter< int >::type iTau_star(iTau_starSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vScaling(vScalingSEXP);
    rcpp_result_gen = Rcpp::wrap(Find_Xi0(vQ_0, vTau, dPhi, dGamma, iTau_star, vScaling));
    return rcpp_result_gen;
END_RCPP
}
// h_fun
double h_fun(int l, int j, int iJ, arma::vec vTau);
RcppExport SEXP _DMQ_h_fun(SEXP lSEXP, SEXP jSEXP, SEXP iJSEXP, SEXP vTauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type l(lSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< int >::type iJ(iJSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vTau(vTauSEXP);
    rcpp_result_gen = Rcpp::wrap(h_fun(l, j, iJ, vTau));
    return rcpp_result_gen;
END_RCPP
}
// g_fun
double g_fun(int l, int j, int iJ, arma::vec vTau);
RcppExport SEXP _DMQ_g_fun(SEXP lSEXP, SEXP jSEXP, SEXP iJSEXP, SEXP vTauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type l(lSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< int >::type iJ(iJSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vTau(vTauSEXP);
    rcpp_result_gen = Rcpp::wrap(g_fun(l, j, iJ, vTau));
    return rcpp_result_gen;
END_RCPP
}
// Get_Gamma_tilde
arma::mat Get_Gamma_tilde(arma::mat mGamma, arma::vec vScaling, int iJ, int iTau_star);
RcppExport SEXP _DMQ_Get_Gamma_tilde(SEXP mGammaSEXP, SEXP vScalingSEXP, SEXP iJSEXP, SEXP iTau_starSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type mGamma(mGammaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vScaling(vScalingSEXP);
    Rcpp::traits::input_parameter< int >::type iJ(iJSEXP);
    Rcpp::traits::input_parameter< int >::type iTau_star(iTau_starSEXP);
    rcpp_result_gen = Rcpp::wrap(Get_Gamma_tilde(mGamma, vScaling, iJ, iTau_star));
    return rcpp_result_gen;
END_RCPP
}
// ScoreVariance_C
arma::mat ScoreVariance_C(arma::vec vTau, arma::vec vBeta, arma::mat mIndex);
RcppExport SEXP _DMQ_ScoreVariance_C(SEXP vTauSEXP, SEXP vBetaSEXP, SEXP mIndexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type vTau(vTauSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vBeta(vBetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mIndex(mIndexSEXP);
    rcpp_result_gen = Rcpp::wrap(ScoreVariance_C(vTau, vBeta, mIndex));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_DMQ_Loss", (DL_FUNC) &_DMQ_Loss, 4},
    {"_DMQ_dHit", (DL_FUNC) &_DMQ_dHit, 4},
    {"_DMQ_FilterDMQ", (DL_FUNC) &_DMQ_FilterDMQ, 11},
    {"_DMQ_XiPrediction", (DL_FUNC) &_DMQ_XiPrediction, 8},
    {"_DMQ_ReferencePrediction", (DL_FUNC) &_DMQ_ReferencePrediction, 5},
    {"_DMQ_Sim_C", (DL_FUNC) &_DMQ_Sim_C, 2},
    {"_DMQ_Simulate_DMQ_C", (DL_FUNC) &_DMQ_Simulate_DMQ_C, 11},
    {"_DMQ_Find_Xi0", (DL_FUNC) &_DMQ_Find_Xi0, 6},
    {"_DMQ_h_fun", (DL_FUNC) &_DMQ_h_fun, 4},
    {"_DMQ_g_fun", (DL_FUNC) &_DMQ_g_fun, 4},
    {"_DMQ_Get_Gamma_tilde", (DL_FUNC) &_DMQ_Get_Gamma_tilde, 4},
    {"_DMQ_ScoreVariance_C", (DL_FUNC) &_DMQ_ScoreVariance_C, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_DMQ(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
