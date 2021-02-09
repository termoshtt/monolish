#pragma once
#include "../common/monolish_common.hpp"
#include <stdio.h>
#include <vector>

#if defined USE_MPI
#include <mpi.h>
#endif

namespace monolish {
/**
 * @brief
 * Basic Linear Algebra Subprograms for Dense Matrix, Sparse Matrix, Vector and
 * Scalar
 */
namespace blas {

/**
 * @brief element by element addition of vector a and vector b.
 * @param a monolish vector (size N)
 * @param b monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void vecadd(const vector<double> &a, const vector<double> &b,
            vector<double> &y);
void vecadd(const vector<double> &a, const vector<double> &b,
            view1D<vector<double>, double> &y);
void vecadd(const vector<double> &a, const view1D<vector<double>, double> &b,
            vector<double> &y);
void vecadd(const vector<double> &a, const view1D<vector<double>, double> &b,
            view1D<vector<double>, double> &y);
void vecadd(const view1D<vector<double>, double> &a, const vector<double> &b,
            vector<double> &y);
void vecadd(const view1D<vector<double>, double> &a, const vector<double> &b,
            view1D<vector<double>, double> &y);
void vecadd(const view1D<vector<double>, double> &a,
            const view1D<vector<double>, double> &b, vector<double> &y);
void vecadd(const view1D<vector<double>, double> &a,
            const view1D<vector<double>, double> &b,
            view1D<vector<double>, double> &y);
void vecadd(const vector<float> &a, const vector<float> &b, vector<float> &y);
void vecadd(const vector<float> &a, const vector<float> &b,
            view1D<vector<float>, float> &y);
void vecadd(const vector<float> &a, const view1D<vector<float>, float> &b,
            vector<float> &y);
void vecadd(const vector<float> &a, const view1D<vector<float>, float> &b,
            view1D<vector<float>, float> &y);
void vecadd(const view1D<vector<float>, float> &a, const vector<float> &b,
            vector<float> &y);
void vecadd(const view1D<vector<float>, float> &a, const vector<float> &b,
            view1D<vector<float>, float> &y);
void vecadd(const view1D<vector<float>, float> &a,
            const view1D<vector<float>, float> &b, vector<float> &y);
void vecadd(const view1D<vector<float>, float> &a,
            const view1D<vector<float>, float> &b,
            view1D<vector<float>, float> &y);

/**
 * @brief element by element subtract of vector a and vector b.
 * @param a monolish vector (size N)
 * @param b monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void vecsub(const vector<double> &a, const vector<double> &b,
            vector<double> &y);
void vecsub(const vector<double> &a, const vector<double> &b,
            view1D<vector<double>, double> &y);
void vecsub(const vector<double> &a, const view1D<vector<double>, double> &b,
            vector<double> &y);
void vecsub(const vector<double> &a, const view1D<vector<double>, double> &b,
            view1D<vector<double>, double> &y);
void vecsub(const view1D<vector<double>, double> &a, const vector<double> &b,
            vector<double> &y);
void vecsub(const view1D<vector<double>, double> &a, const vector<double> &b,
            view1D<vector<double>, double> &y);
void vecsub(const view1D<vector<double>, double> &a,
            const view1D<vector<double>, double> &b, vector<double> &y);
void vecsub(const view1D<vector<double>, double> &a,
            const view1D<vector<double>, double> &b,
            view1D<vector<double>, double> &y);
void vecsub(const vector<float> &a, const vector<float> &b, vector<float> &y);
void vecsub(const vector<float> &a, const vector<float> &b,
            view1D<vector<float>, float> &y);
void vecsub(const vector<float> &a, const view1D<vector<float>, float> &b,
            vector<float> &y);
void vecsub(const vector<float> &a, const view1D<vector<float>, float> &b,
            view1D<vector<float>, float> &y);
void vecsub(const view1D<vector<float>, float> &a, const vector<float> &b,
            vector<float> &y);
void vecsub(const view1D<vector<float>, float> &a, const vector<float> &b,
            view1D<vector<float>, float> &y);
void vecsub(const view1D<vector<float>, float> &a,
            const view1D<vector<float>, float> &b, vector<float> &y);
void vecsub(const view1D<vector<float>, float> &a,
            const view1D<vector<float>, float> &b,
            view1D<vector<float>, float> &y);

/**
 * @brief vector\<float\> copy (y=a)
 * @param a monolish vector\<float\> (size N)
 * @param y monolish vector\<float\> (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void copy(const vector<double> &x, vector<double> &y);
void copy(const vector<double> &x, view1D<vector<double>, double> &y);
void copy(const view1D<vector<double>, double> &x, vector<double> &y);
void copy(const view1D<vector<double>, double> &x,
          view1D<vector<double>, double> &y);
void copy(const vector<float> &x, vector<float> &y);
void copy(const vector<float> &x, view1D<vector<float>, float> &y);
void copy(const view1D<vector<float>, float> &x, vector<float> &y);
void copy(const view1D<vector<float>, float> &x,
          view1D<vector<float>, float> &y);

/**
 * @brief vector\<float\> asum (absolute sum)
 * @param x monolish vector\<float\> (size N)
 * @return The result of the asum
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void asum(const vector<double> &x, double &ans);
void asum(const view1D<vector<double>, double> &x, double &ans);
void asum(const vector<float> &x, float &ans);
void asum(const view1D<vector<float>, float> &x, float &ans);

/**
 * @brief vector\<float\> asum (absolute sum)
 * @param x monolish vector\<float\> (size N)
 * @param ans The result of the asum
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
double asum(const vector<double> &x);
double asum(const view1D<vector<double>, double> &x);
float asum(const vector<float> &x);
float asum(const view1D<vector<float>, float> &x);

/**
 * @brief vector\<float\> sum
 * @param x monolish vector\<float\> (size N)
 * @return The result of the sum
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void sum(const vector<double> &x, double &ans);
void sum(const view1D<vector<double>, double> &x, double &ans);
void sum(const vector<float> &x, float &ans);
void sum(const view1D<vector<float>, float> &x, float &ans);

/**
 * @brief vector\<float\> sum
 * @param x monolish vector\<float\> (size N)
 * @param ans The result of the sum
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
double sum(const vector<double> &x);
double sum(const view1D<vector<double>, double> &x);
float sum(const vector<float> &x);
float sum(const view1D<vector<float>, float> &x);

/**
 * @brief axpy: y = ax + y
 * @param alpha scalar value
 * @param x monolish vector\<float\> (size N)
 * @param y monolish vector\<float\> (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void axpy(const double alpha, const vector<double> &x, vector<double> &y);
void axpy(const double alpha, const vector<double> &x,
          view1D<vector<double>, double> &y);
void axpy(const double alpha, const view1D<vector<double>, double> &x,
          vector<double> &y);
void axpy(const double alpha, const view1D<vector<double>, double> &x,
          view1D<vector<double>, double> &y);
void axpy(const float alpha, const vector<float> &x, vector<float> &y);
void axpy(const float alpha, const vector<float> &x,
          view1D<vector<float>, float> &y);
void axpy(const float alpha, const view1D<vector<float>, float> &x,
          vector<float> &y);
void axpy(const float alpha, const view1D<vector<float>, float> &x,
          view1D<vector<float>, float> &y);

/**
 * @brief axpyz: z = ax + y
 * @param alpha scalar value
 * @param x monolish vector\<float\> (size N)
 * @param y monolish vector\<float\> (size N)
 * @param z monolish vector\<float\> (size N)
 * @note
 * - # of computation: 2N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void axpyz(const double alpha, const vector<double> &x, const vector<double> &y,
           vector<double> &z);
void axpyz(const double alpha, const vector<double> &x, const vector<double> &y,
           view1D<vector<double>, double> &z);
void axpyz(const double alpha, const vector<double> &x,
           const view1D<vector<double>, double> &y, vector<double> &z);
void axpyz(const double alpha, const vector<double> &x,
           const view1D<vector<double>, double> &y,
           view1D<vector<double>, double> &z);
void axpyz(const double alpha, const view1D<vector<double>, double> &x,
           const vector<double> &y, vector<double> &z);
void axpyz(const double alpha, const view1D<vector<double>, double> &x,
           const vector<double> &y, view1D<vector<double>, double> &z);
void axpyz(const double alpha, const view1D<vector<double>, double> &x,
           const view1D<vector<double>, double> &y, vector<double> &z);
void axpyz(const double alpha, const view1D<vector<double>, double> &x,
           const view1D<vector<double>, double> &y,
           view1D<vector<double>, double> &z);
void axpyz(const float alpha, const vector<float> &x, const vector<float> &y,
           vector<float> &z);
void axpyz(const float alpha, const vector<float> &x, const vector<float> &y,
           view1D<vector<float>, float> &z);
void axpyz(const float alpha, const vector<float> &x,
           const view1D<vector<float>, float> &y, vector<float> &z);
void axpyz(const float alpha, const vector<float> &x,
           const view1D<vector<float>, float> &y,
           view1D<vector<float>, float> &z);
void axpyz(const float alpha, const view1D<vector<float>, float> &x,
           const vector<float> &y, vector<float> &z);
void axpyz(const float alpha, const view1D<vector<float>, float> &x,
           const vector<float> &y, view1D<vector<float>, float> &z);
void axpyz(const float alpha, const view1D<vector<float>, float> &x,
           const view1D<vector<float>, float> &y, vector<float> &z);
void axpyz(const float alpha, const view1D<vector<float>, float> &x,
           const view1D<vector<float>, float> &y,
           view1D<vector<float>, float> &z);

/**
 * @brief inner product (dot)
 * @param x monolish vector\<float\> (size N)
 * @param y monolish vector\<float\> (size N)
 * @return The result of the inner product product of x and y
 * @note
 * - # of computation: 2N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void dot(const vector<double> &x, const vector<double> &y, double &ans);
void dot(const vector<double> &x, const view1D<vector<double>, double> &y,
         double &ans);
void dot(const view1D<vector<double>, double> &x, const vector<double> &y,
         double &ans);
void dot(const view1D<vector<double>, double> &x,
         const view1D<vector<double>, double> &y, double &ans);
void dot(const vector<float> &x, const vector<float> &y, float &ans);
void dot(const vector<float> &x, const view1D<vector<float>, float> &y,
         float &ans);
void dot(const view1D<vector<float>, float> &x, const vector<float> &y,
         float &ans);
void dot(const view1D<vector<float>, float> &x,
         const view1D<vector<float>, float> &y, float &ans);

/**
 * @brief inner product (dot)
 * @param x monolish vector\<float\> (size N)
 * @param y monolish vector\<float\> (size N)
 * @param ans The result of the inner product product of x and y
 * @note
 * - # of computation: 2N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
double dot(const vector<double> &x, const vector<double> &y);
double dot(const vector<double> &x, const view1D<vector<double>, double> &y);
double dot(const view1D<vector<double>, double> &x, const vector<double> &y);
double dot(const view1D<vector<double>, double> &x,
           const view1D<vector<double>, double> &y);
float dot(const vector<float> &x, const vector<float> &y);
float dot(const vector<float> &x, const view1D<vector<float>, float> &y);
float dot(const view1D<vector<float>, float> &x, const vector<float> &y);
float dot(const view1D<vector<float>, float> &x,
          const view1D<vector<float>, float> &y);

/**
 * @brief nrm1: sum(abs(x[0:N]))
 * @param x monolish vector\<float\> (size N)
 * @return The result of the nrm1
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void nrm1(const vector<double> &x, double &ans);
void nrm1(const view1D<vector<double>, double> &x, double &ans);
void nrm1(const vector<float> &x, float &ans);
void nrm1(const view1D<vector<float>, float> &x, float &ans);

/**
 * @brief nrm1: sum(abs(x[0:N]))
 * @param x monolish vector\<float\> (size N)
 * @param ans The result of the nrm1
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
double nrm1(const vector<double> &x);
double nrm1(const view1D<vector<double>, double> &x);
float nrm1(const vector<float> &x);
float nrm1(const view1D<vector<float>, float> &x);

/**
 * @brief nrm2: ||x||_2
 * @param x monolish vector\<float\> (size N)
 * @return The result of the nrm2
 * @note
 * - # of computation: 2N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void nrm2(const vector<double> &x, double &ans);
void nrm2(const view1D<vector<double>, double> &x, double &ans);
void nrm2(const vector<float> &x, float &ans);
void nrm2(const view1D<vector<float>, float> &x, float &ans);

/**
 * @brief nrm2: ||x||_2
 * @param x monolish vector\<float\> (size N)
 * @param ans The result of the nrm2
 * @note
 * - # of computation: 2N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
double nrm2(const vector<double> &x);
double nrm2(const view1D<vector<double>, double> &x);
float nrm2(const vector<float> &x);
float nrm2(const view1D<vector<float>, float> &x);

/**
 * @brief scal: x = alpha * x
 * @param alpha scalar value
 * @param x monolish vector\<float\> (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void scal(const double alpha, vector<double> &x);
void scal(const double alpha, view1D<vector<double>, double> &x);
void scal(const float alpha, vector<float> &x);
void scal(const float alpha, view1D<vector<float>, float> &x);

/**
 * @brief xpay: y = x + ay
 * @param alpha scalar value
 * @param x monolish vector\<float\> (size N)
 * @param y monolish vector\<float\> (size N)
 * @note
 * - # of computation: 2N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void xpay(const double alpha, const vector<double> &x, vector<double> &y);
void xpay(const double alpha, const vector<double> &x,
          view1D<vector<double>, double> &y);
void xpay(const double alpha, const view1D<vector<double>, double> &x,
          vector<double> &y);
void xpay(const double alpha, const view1D<vector<double>, double> &x,
          view1D<vector<double>, double> &y);
void xpay(const float alpha, const vector<float> &x, vector<float> &y);
void xpay(const float alpha, const vector<float> &x,
          view1D<vector<float>, float> &y);
void xpay(const float alpha, const view1D<vector<float>, float> &x,
          vector<float> &y);
void xpay(const float alpha, const view1D<vector<float>, float> &x,
          view1D<vector<float>, float> &y);

} // namespace blas
} // namespace monolish
