// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// run_gibbSimple
NumericMatrix run_gibbSimple(NumericMatrix adj, NumericVector weights, double alpha0, double alpha1, int R, int N, NumericVector start);
RcppExport SEXP _gibbsMRF_run_gibbSimple(SEXP adjSEXP, SEXP weightsSEXP, SEXP alpha0SEXP, SEXP alpha1SEXP, SEXP RSEXP, SEXP NSEXP, SEXP startSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type adj(adjSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha0(alpha0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha1(alpha1SEXP);
    Rcpp::traits::input_parameter< int >::type R(RSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type start(startSEXP);
    rcpp_result_gen = Rcpp::wrap(run_gibbSimple(adj, weights, alpha0, alpha1, R, N, start));
    return rcpp_result_gen;
END_RCPP
}
// run_gibbSimple1
NumericVector run_gibbSimple1(NumericMatrix adj, NumericVector weights, double alpha0, double alpha1, int R, int N, NumericVector start);
RcppExport SEXP _gibbsMRF_run_gibbSimple1(SEXP adjSEXP, SEXP weightsSEXP, SEXP alpha0SEXP, SEXP alpha1SEXP, SEXP RSEXP, SEXP NSEXP, SEXP startSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type adj(adjSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha0(alpha0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha1(alpha1SEXP);
    Rcpp::traits::input_parameter< int >::type R(RSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type start(startSEXP);
    rcpp_result_gen = Rcpp::wrap(run_gibbSimple1(adj, weights, alpha0, alpha1, R, N, start));
    return rcpp_result_gen;
END_RCPP
}
// run_gibbSimplestat
NumericMatrix run_gibbSimplestat(NumericMatrix adj, NumericVector weights, double alpha0, double alpha1, int R, int N, NumericVector start);
RcppExport SEXP _gibbsMRF_run_gibbSimplestat(SEXP adjSEXP, SEXP weightsSEXP, SEXP alpha0SEXP, SEXP alpha1SEXP, SEXP RSEXP, SEXP NSEXP, SEXP startSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type adj(adjSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha0(alpha0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha1(alpha1SEXP);
    Rcpp::traits::input_parameter< int >::type R(RSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type start(startSEXP);
    rcpp_result_gen = Rcpp::wrap(run_gibbSimplestat(adj, weights, alpha0, alpha1, R, N, start));
    return rcpp_result_gen;
END_RCPP
}
// run_gibbSimplestat1
NumericVector run_gibbSimplestat1(NumericMatrix adj, NumericVector weights, double alpha0, double alpha1, int R, int N, NumericVector start);
RcppExport SEXP _gibbsMRF_run_gibbSimplestat1(SEXP adjSEXP, SEXP weightsSEXP, SEXP alpha0SEXP, SEXP alpha1SEXP, SEXP RSEXP, SEXP NSEXP, SEXP startSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type adj(adjSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha0(alpha0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha1(alpha1SEXP);
    Rcpp::traits::input_parameter< int >::type R(RSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type start(startSEXP);
    rcpp_result_gen = Rcpp::wrap(run_gibbSimplestat1(adj, weights, alpha0, alpha1, R, N, start));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_gibbsMRF_run_gibbSimple", (DL_FUNC) &_gibbsMRF_run_gibbSimple, 7},
    {"_gibbsMRF_run_gibbSimple1", (DL_FUNC) &_gibbsMRF_run_gibbSimple1, 7},
    {"_gibbsMRF_run_gibbSimplestat", (DL_FUNC) &_gibbsMRF_run_gibbSimplestat, 7},
    {"_gibbsMRF_run_gibbSimplestat1", (DL_FUNC) &_gibbsMRF_run_gibbSimplestat1, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_gibbsMRF(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
