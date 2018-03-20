#include <Rcpp.h>
#include <math.h>
using namespace Rcpp;


double neighborsum (NumericVector v1, NumericVector v2, double weight, int N){

  double sum = 0;

  for (int i=0; i<N; i++) {
    sum += (v1[i]*v2[i]);
  }
  double scaled = sum/weight;

  return scaled;

}



//' @export
// [[Rcpp::export]]
NumericMatrix run_gibbSimple(NumericMatrix adj, NumericVector weights, double alpha0, double alpha1, int R, int N, NumericVector start) {

  NumericMatrix mat(N, R);
  NumericVector vec = start;

  for (int r=0; r<R; r++) {
    for (int i=0; i<N; i++) {
    double sum = neighborsum(vec,adj(_,i),weights(i),N);
    double prob = R::plogis(alpha0 + alpha1*sum,0,1,1,0);
    vec[i] = R::rbinom(1,prob);
    }
    mat(_,r) = vec ;
  }
  return mat;
}

