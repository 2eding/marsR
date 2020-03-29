// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// scaleC
NumericMatrix scaleC(NumericMatrix m);
RcppExport SEXP _marsR_scaleC(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(scaleC(m));
    return rcpp_result_gen;
END_RCPP
}
// makeSigmasemiPD
NumericMatrix makeSigmasemiPD(NumericMatrix geno);
RcppExport SEXP _marsR_makeSigmasemiPD(SEXP genoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type geno(genoSEXP);
    rcpp_result_gen = Rcpp::wrap(makeSigmasemiPD(geno));
    return rcpp_result_gen;
END_RCPP
}
// computeLRT
DataFrame computeLRT(NumericMatrix stat, NumericMatrix geno, int subsize, int causalCount, double NCP, double gamma);
RcppExport SEXP _marsR_computeLRT(SEXP statSEXP, SEXP genoSEXP, SEXP subsizeSEXP, SEXP causalCountSEXP, SEXP NCPSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type stat(statSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< int >::type subsize(subsizeSEXP);
    Rcpp::traits::input_parameter< int >::type causalCount(causalCountSEXP);
    Rcpp::traits::input_parameter< double >::type NCP(NCPSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(computeLRT(stat, geno, subsize, causalCount, NCP, gamma));
    return rcpp_result_gen;
END_RCPP
}
// rmvnormC
arma::mat rmvnormC(int n, arma::vec mean, arma::mat sigma, double setseed);
RcppExport SEXP _marsR_rmvnormC(SEXP nSEXP, SEXP meanSEXP, SEXP sigmaSEXP, SEXP setseedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type setseed(setseedSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvnormC(n, mean, sigma, setseed));
    return rcpp_result_gen;
END_RCPP
}
// dmvnormC
arma::vec dmvnormC(arma::mat const& x, arma::rowvec const& mean, arma::mat const& sigma, bool const logd);
RcppExport SEXP _marsR_dmvnormC(SEXP xSEXP, SEXP meanSEXP, SEXP sigmaSEXP, SEXP logdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec const& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool const >::type logd(logdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnormC(x, mean, sigma, logd));
    return rcpp_result_gen;
END_RCPP
}
// nullmars
List nullmars(NumericMatrix geno, int simNum, double setseed, bool fastMARS);
RcppExport SEXP _marsR_nullmars(SEXP genoSEXP, SEXP simNumSEXP, SEXP setseedSEXP, SEXP fastMARSSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< int >::type simNum(simNumSEXP);
    Rcpp::traits::input_parameter< double >::type setseed(setseedSEXP);
    Rcpp::traits::input_parameter< bool >::type fastMARS(fastMARSSEXP);
    rcpp_result_gen = Rcpp::wrap(nullmars(geno, simNum, setseed, fastMARS));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_marsR_scaleC", (DL_FUNC) &_marsR_scaleC, 1},
    {"_marsR_makeSigmasemiPD", (DL_FUNC) &_marsR_makeSigmasemiPD, 1},
    {"_marsR_computeLRT", (DL_FUNC) &_marsR_computeLRT, 6},
    {"_marsR_rmvnormC", (DL_FUNC) &_marsR_rmvnormC, 4},
    {"_marsR_dmvnormC", (DL_FUNC) &_marsR_dmvnormC, 4},
    {"_marsR_nullmars", (DL_FUNC) &_marsR_nullmars, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_marsR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}