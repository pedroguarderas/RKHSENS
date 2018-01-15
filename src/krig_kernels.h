#ifndef __KRIG_kernels__
#define __KRIG_kernels__

#include <RcppArmadillo.h>
#include <gsl/gsl_sf_bessel.h>
#include <gsl/gsl_sf_exp.h>
#include <gsl/gsl_sf_gamma.h>
#include <gsl/gsl_sf_log.h>
#include <gsl/gsl_math.h>

// [[Rcpp::plugins(cpp14)]]
// [[Rcpp::depends(RcppArmadillo)]]

using namespace Rcpp;

/*--------------------------------------------------------------------------------------------------
  Isotropic covariance models.
  In the current section are defined different isotropic kernels.
--------------------------------------------------------------------------------------------------*/


//--------------------------------------------------------------------------------------------------
//' @title Linear kernel
//' @description
//' @param h
//' @param alpha
//' @return Real value
//' @author Pedro Guarderas
//' @export
// [[Rcpp::export]]
double linear_kernel( const double& h, const double& alpha = 1.0 );

//--------------------------------------------------------------------------------------------------
//' @title Square kernel
//' @description
//' @param h
//' @param alpha
//' @return Real value
//' @author Pedro Guarderas
//' @export
// [[Rcpp::export]]
double square_kernel( const double& h, const double& alpha = 1.0 );

//--------------------------------------------------------------------------------------------------
//' @title Triangular kernel
//' @description
//' @param h
//' @param c
//' @param alpha
//' @return Real value
//' @author Pedro Guarderas
//' @export
// [[Rcpp::export]]
double triangular_kernel( const double& h, const double& c = 1.0, const double& alpha = 1.0 );

//--------------------------------------------------------------------------------------------------
//' @title Exponential kernel
//' @description
//' @param h
//' @param sigma
//' @param theta
//' @return Real value
//' @author Pedro Guarderas
//' @export
// [[Rcpp::export]]
double exp_kernel( const double& h, const double& sigma = 1.0, const double& theta = 1.0 );

//--------------------------------------------------------------------------------------------------
//' @title Gaussian kernel
//' @description
//' @param h
//' @param sigma
//' @param theta
//' @return Real value
//' @author Pedro Guarderas
//' @export
// [[Rcpp::export]]
double gaussian_kernel( const double& h, const double& sigma = 1.0, const double& theta = 1.0 );

//--------------------------------------------------------------------------------------------------
//' @title Spherical kernel
//' @description
//' @param h
//' @param phi
//' @param theta
//' @return Real value
//' @author Pedro Guarderas
//' @export
// [[Rcpp::export]]
double spherical_kernel( const double& h, const double& phi, const double& theta );

//--------------------------------------------------------------------------------------------------
//' @title Matérn kernel
//' @description
//' @param h
//' @param v
//' @param sigma
//' @return Real value
//' @author Pedro Guarderas
//' @export
// [[Rcpp::export]]
double matern_kernel( const double& h, const double& v = 2.0, const double& sigma = 1.0,
                      const double& theta = 1.0 );

//--------------------------------------------------------------------------------------------------
//' @title Multilog kernel
//' @description
//' @param h
//' @param R
//' @return Real value
//' @author Pedro Guarderas
//' @export
// [[Rcpp::export]]
double multilog_kernel( const double& h, const double& R = 1.0 );

//--------------------------------------------------------------------------------------------------
//' @title Natural cubic spline kernel
//' @description
//' @param h
//' @param R
//' @return Real value
//' @author Pedro Guarderas
//' @export
// [[Rcpp::export]]
double nat_cubic_spline_kernel( const double& h, const double& R = 1.0 );

//--------------------------------------------------------------------------------------------------
//' @title Thin plate kernel
//' @description
//' @param h
//' @param R
//' @return Real value
//' @author Pedro Guarderas
//' @export
// [[Rcpp::export]]
double thin_plate_kernel( const double& h, const double& R = 1.0 );

//--------------------------------------------------------------------------------------------------
//' @title Mix kernel
//' @description
//' @param h
//' @param sigma
//' @param theta
//' @return Real value
//' @author Pedro Guarderas
//' @export
// [[Rcpp::export]]
double mix_kernel( const double& h, const double& sigma = 1.0, const double& theta = 1.0 );

#endif