// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

// weight_pow_dist
double weight_pow_dist(const arma::colvec& x, const arma::colvec& y, const arma::colvec& w, const arma::colvec& p);
RcppExport SEXP _KRIG_weight_pow_dist(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(weight_pow_dist(x, y, w, p));
    return rcpp_result_gen;
END_RCPP
}
// vector_integrate_kernel
arma::colvec vector_integrate_kernel(Function Kern, const arma::colvec x, const double& a, const double& b, const double& n);
RcppExport SEXP _KRIG_vector_integrate_kernel(SEXP KernSEXP, SEXP xSEXP, SEXP aSEXP, SEXP bSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Function >::type Kern(KernSEXP);
    Rcpp::traits::input_parameter< const arma::colvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const double& >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(vector_integrate_kernel(Kern, x, a, b, n));
    return rcpp_result_gen;
END_RCPP
}
// complete_integrate_kernel
double complete_integrate_kernel(Function Kern, const double& a, const double& b, const double& n);
RcppExport SEXP _KRIG_complete_integrate_kernel(SEXP KernSEXP, SEXP aSEXP, SEXP bSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Function >::type Kern(KernSEXP);
    Rcpp::traits::input_parameter< const double& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const double& >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(complete_integrate_kernel(Kern, a, b, n));
    return rcpp_result_gen;
END_RCPP
}
// list_integrate_kernel
List list_integrate_kernel(const DataFrame& Kernels, const arma::mat& X);
RcppExport SEXP _KRIG_list_integrate_kernel(SEXP KernelsSEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DataFrame& >::type Kernels(KernelsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(list_integrate_kernel(Kernels, X));
    return rcpp_result_gen;
END_RCPP
}
// Kanova
List Kanova(const DataFrame& Kernels, const List& Integral, const arma::mat& X);
RcppExport SEXP _KRIG_Kanova(SEXP KernelsSEXP, SEXP IntegralSEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DataFrame& >::type Kernels(KernelsSEXP);
    Rcpp::traits::input_parameter< const List& >::type Integral(IntegralSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(Kanova(Kernels, Integral, X));
    return rcpp_result_gen;
END_RCPP
}
// linear_kernel
double linear_kernel(const arma::colvec& x, const arma::colvec& y, const double& alpha);
RcppExport SEXP _KRIG_linear_kernel(SEXP xSEXP, SEXP ySEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double& >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(linear_kernel(x, y, alpha));
    return rcpp_result_gen;
END_RCPP
}
// polynomial_kernel
double polynomial_kernel(const arma::colvec& x, const arma::colvec& y, const double& alpha, const double& beta, const double& n);
RcppExport SEXP _KRIG_polynomial_kernel(SEXP xSEXP, SEXP ySEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const double& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const double& >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(polynomial_kernel(x, y, alpha, beta, n));
    return rcpp_result_gen;
END_RCPP
}
// square_kernel
double square_kernel(const double& h, const double& alpha);
RcppExport SEXP _KRIG_square_kernel(SEXP hSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(square_kernel(h, alpha));
    return rcpp_result_gen;
END_RCPP
}
// triangular_kernel
double triangular_kernel(const double& h, const double& c, const double& alpha);
RcppExport SEXP _KRIG_triangular_kernel(SEXP hSEXP, SEXP cSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type c(cSEXP);
    Rcpp::traits::input_parameter< const double& >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(triangular_kernel(h, c, alpha));
    return rcpp_result_gen;
END_RCPP
}
// exp_kernel
double exp_kernel(const double& h, const double& sigma, const double& theta);
RcppExport SEXP _KRIG_exp_kernel(SEXP hSEXP, SEXP sigmaSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const double& >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(exp_kernel(h, sigma, theta));
    return rcpp_result_gen;
END_RCPP
}
// gaussian_kernel
double gaussian_kernel(const double& h, const double& sigma, const double& theta);
RcppExport SEXP _KRIG_gaussian_kernel(SEXP hSEXP, SEXP sigmaSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const double& >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(gaussian_kernel(h, sigma, theta));
    return rcpp_result_gen;
END_RCPP
}
// spherical_kernel
double spherical_kernel(const double& h, const double& phi, const double& theta);
RcppExport SEXP _KRIG_spherical_kernel(SEXP hSEXP, SEXP phiSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< const double& >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(spherical_kernel(h, phi, theta));
    return rcpp_result_gen;
END_RCPP
}
// matern_kernel
double matern_kernel(const double& h, const double& v, const double& sigma, const double& theta);
RcppExport SEXP _KRIG_matern_kernel(SEXP hSEXP, SEXP vSEXP, SEXP sigmaSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type v(vSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const double& >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(matern_kernel(h, v, sigma, theta));
    return rcpp_result_gen;
END_RCPP
}
// multilog_kernel
double multilog_kernel(const double& h, const double& R);
RcppExport SEXP _KRIG_multilog_kernel(SEXP hSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(multilog_kernel(h, R));
    return rcpp_result_gen;
END_RCPP
}
// nat_cubic_spline_kernel
double nat_cubic_spline_kernel(const double& h, const double& R);
RcppExport SEXP _KRIG_nat_cubic_spline_kernel(SEXP hSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(nat_cubic_spline_kernel(h, R));
    return rcpp_result_gen;
END_RCPP
}
// thin_plate_kernel
double thin_plate_kernel(const double& h, const double& R);
RcppExport SEXP _KRIG_thin_plate_kernel(SEXP hSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(thin_plate_kernel(h, R));
    return rcpp_result_gen;
END_RCPP
}
// Kov
arma::mat Kov(const arma::mat& X, const arma::mat& Y, Function Kern, const bool symmetric);
RcppExport SEXP _KRIG_Kov(SEXP XSEXP, SEXP YSEXP, SEXP KernSEXP, SEXP symmetricSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Function >::type Kern(KernSEXP);
    Rcpp::traits::input_parameter< const bool >::type symmetric(symmetricSEXP);
    rcpp_result_gen = Rcpp::wrap(Kov(X, Y, Kern, symmetric));
    return rcpp_result_gen;
END_RCPP
}
// Krig
List Krig(const arma::mat& Z, const arma::mat& K, const arma::mat& k, const arma::mat& G, const arma::mat& g, const std::string type, const std::string cinv);
RcppExport SEXP _KRIG_Krig(SEXP ZSEXP, SEXP KSEXP, SEXP kSEXP, SEXP GSEXP, SEXP gSEXP, SEXP typeSEXP, SEXP cinvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type G(GSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type g(gSEXP);
    Rcpp::traits::input_parameter< const std::string >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const std::string >::type cinv(cinvSEXP);
    rcpp_result_gen = Rcpp::wrap(Krig(Z, K, k, G, g, type, cinv));
    return rcpp_result_gen;
END_RCPP
}
// sens_idx
double sens_idx(const arma::colvec KF, const arma::colvec comb, const arma::mat X, const arma::cube Gamma);
RcppExport SEXP _KRIG_sens_idx(SEXP KFSEXP, SEXP combSEXP, SEXP XSEXP, SEXP GammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec >::type KF(KFSEXP);
    Rcpp::traits::input_parameter< const arma::colvec >::type comb(combSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::cube >::type Gamma(GammaSEXP);
    rcpp_result_gen = Rcpp::wrap(sens_idx(KF, comb, X, Gamma));
    return rcpp_result_gen;
END_RCPP
}
// sens_var
double sens_var(const arma::colvec KF, const arma::cube Gamma);
RcppExport SEXP _KRIG_sens_var(SEXP KFSEXP, SEXP GammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec >::type KF(KFSEXP);
    Rcpp::traits::input_parameter< const arma::cube >::type Gamma(GammaSEXP);
    rcpp_result_gen = Rcpp::wrap(sens_var(KF, Gamma));
    return rcpp_result_gen;
END_RCPP
}
// variogram
List variogram(const arma::mat& Z, const arma::mat& X, Function d);
RcppExport SEXP _KRIG_variogram(SEXP ZSEXP, SEXP XSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< Function >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(variogram(Z, X, d));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_KRIG_weight_pow_dist", (DL_FUNC) &_KRIG_weight_pow_dist, 4},
    {"_KRIG_vector_integrate_kernel", (DL_FUNC) &_KRIG_vector_integrate_kernel, 5},
    {"_KRIG_complete_integrate_kernel", (DL_FUNC) &_KRIG_complete_integrate_kernel, 4},
    {"_KRIG_list_integrate_kernel", (DL_FUNC) &_KRIG_list_integrate_kernel, 2},
    {"_KRIG_Kanova", (DL_FUNC) &_KRIG_Kanova, 3},
    {"_KRIG_linear_kernel", (DL_FUNC) &_KRIG_linear_kernel, 3},
    {"_KRIG_polynomial_kernel", (DL_FUNC) &_KRIG_polynomial_kernel, 5},
    {"_KRIG_square_kernel", (DL_FUNC) &_KRIG_square_kernel, 2},
    {"_KRIG_triangular_kernel", (DL_FUNC) &_KRIG_triangular_kernel, 3},
    {"_KRIG_exp_kernel", (DL_FUNC) &_KRIG_exp_kernel, 3},
    {"_KRIG_gaussian_kernel", (DL_FUNC) &_KRIG_gaussian_kernel, 3},
    {"_KRIG_spherical_kernel", (DL_FUNC) &_KRIG_spherical_kernel, 3},
    {"_KRIG_matern_kernel", (DL_FUNC) &_KRIG_matern_kernel, 4},
    {"_KRIG_multilog_kernel", (DL_FUNC) &_KRIG_multilog_kernel, 2},
    {"_KRIG_nat_cubic_spline_kernel", (DL_FUNC) &_KRIG_nat_cubic_spline_kernel, 2},
    {"_KRIG_thin_plate_kernel", (DL_FUNC) &_KRIG_thin_plate_kernel, 2},
    {"_KRIG_Kov", (DL_FUNC) &_KRIG_Kov, 4},
    {"_KRIG_Krig", (DL_FUNC) &_KRIG_Krig, 7},
    {"_KRIG_sens_idx", (DL_FUNC) &_KRIG_sens_idx, 4},
    {"_KRIG_sens_var", (DL_FUNC) &_KRIG_sens_var, 2},
    {"_KRIG_variogram", (DL_FUNC) &_KRIG_variogram, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_KRIG(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
