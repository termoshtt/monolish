#pragma once
#include "../common/monolish_common.hpp"

#if defined USE_MPI
#include <mpi.h>
#endif

namespace monolish {
/**
 * @brief
 * Vector and Matrix element-wise math library
 */
namespace vml {

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
void add(const vector<double> &a, const vector<double> &b, vector<double> &y);
void add(const vector<double> &a, const vector<double> &b,
         view1D<vector<double>, double> &y);
void add(const vector<double> &a, const view1D<vector<double>, double> &b,
         vector<double> &y);
void add(const vector<double> &a, const view1D<vector<double>, double> &b,
         view1D<vector<double>, double> &y);
void add(const view1D<vector<double>, double> &a, const vector<double> &b,
         vector<double> &y);
void add(const view1D<vector<double>, double> &a, const vector<double> &b,
         view1D<vector<double>, double> &y);
void add(const view1D<vector<double>, double> &a,
         const view1D<vector<double>, double> &b, vector<double> &y);
void add(const view1D<vector<double>, double> &a,
         const view1D<vector<double>, double> &b,
         view1D<vector<double>, double> &y);
void add(const vector<float> &a, const vector<float> &b, vector<float> &y);
void add(const vector<float> &a, const vector<float> &b,
         view1D<vector<float>, float> &y);
void add(const vector<float> &a, const view1D<vector<float>, float> &b,
         vector<float> &y);
void add(const vector<float> &a, const view1D<vector<float>, float> &b,
         view1D<vector<float>, float> &y);
void add(const view1D<vector<float>, float> &a, const vector<float> &b,
         vector<float> &y);
void add(const view1D<vector<float>, float> &a, const vector<float> &b,
         view1D<vector<float>, float> &y);
void add(const view1D<vector<float>, float> &a,
         const view1D<vector<float>, float> &b, vector<float> &y);
void add(const view1D<vector<float>, float> &a,
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
void sub(const vector<double> &a, const vector<double> &b, vector<double> &y);
void sub(const vector<double> &a, const vector<double> &b,
         view1D<vector<double>, double> &y);
void sub(const vector<double> &a, const view1D<vector<double>, double> &b,
         vector<double> &y);
void sub(const vector<double> &a, const view1D<vector<double>, double> &b,
         view1D<vector<double>, double> &y);
void sub(const view1D<vector<double>, double> &a, const vector<double> &b,
         vector<double> &y);
void sub(const view1D<vector<double>, double> &a, const vector<double> &b,
         view1D<vector<double>, double> &y);
void sub(const view1D<vector<double>, double> &a,
         const view1D<vector<double>, double> &b, vector<double> &y);
void sub(const view1D<vector<double>, double> &a,
         const view1D<vector<double>, double> &b,
         view1D<vector<double>, double> &y);
void sub(const vector<float> &a, const vector<float> &b, vector<float> &y);
void sub(const vector<float> &a, const vector<float> &b,
         view1D<vector<float>, float> &y);
void sub(const vector<float> &a, const view1D<vector<float>, float> &b,
         vector<float> &y);
void sub(const vector<float> &a, const view1D<vector<float>, float> &b,
         view1D<vector<float>, float> &y);
void sub(const view1D<vector<float>, float> &a, const vector<float> &b,
         vector<float> &y);
void sub(const view1D<vector<float>, float> &a, const vector<float> &b,
         view1D<vector<float>, float> &y);
void sub(const view1D<vector<float>, float> &a,
         const view1D<vector<float>, float> &b, vector<float> &y);
void sub(const view1D<vector<float>, float> &a,
         const view1D<vector<float>, float> &b,
         view1D<vector<float>, float> &y);

/**
 * @brief element by element multiplication of vector a and vector b.
 * @param a monolish vector (size N)
 * @param b monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void mul(const vector<double> &a, const vector<double> &b, vector<double> &y);
void mul(const vector<double> &a, const vector<double> &b,
         view1D<vector<double>, double> &y);
void mul(const vector<double> &a, const view1D<vector<double>, double> &b,
         vector<double> &y);
void mul(const vector<double> &a, const view1D<vector<double>, double> &b,
         view1D<vector<double>, double> &y);
void mul(const view1D<vector<double>, double> &a, const vector<double> &b,
         vector<double> &y);
void mul(const view1D<vector<double>, double> &a, const vector<double> &b,
         view1D<vector<double>, double> &y);
void mul(const view1D<vector<double>, double> &a,
         const view1D<vector<double>, double> &b, vector<double> &y);
void mul(const view1D<vector<double>, double> &a,
         const view1D<vector<double>, double> &b,
         view1D<vector<double>, double> &y);
void mul(const vector<float> &a, const vector<float> &b, vector<float> &y);
void mul(const vector<float> &a, const vector<float> &b,
         view1D<vector<float>, float> &y);
void mul(const vector<float> &a, const view1D<vector<float>, float> &b,
         vector<float> &y);
void mul(const vector<float> &a, const view1D<vector<float>, float> &b,
         view1D<vector<float>, float> &y);
void mul(const view1D<vector<float>, float> &a, const vector<float> &b,
         vector<float> &y);
void mul(const view1D<vector<float>, float> &a, const vector<float> &b,
         view1D<vector<float>, float> &y);
void mul(const view1D<vector<float>, float> &a,
         const view1D<vector<float>, float> &b, vector<float> &y);
void mul(const view1D<vector<float>, float> &a,
         const view1D<vector<float>, float> &b,
         view1D<vector<float>, float> &y);

/**
 * @brief element by element division of vector a and vector b.
 * @param a monolish vector (size N)
 * @param b monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void div(const vector<double> &a, const vector<double> &b, vector<double> &y);
void div(const vector<double> &a, const vector<double> &b,
         view1D<vector<double>, double> &y);
void div(const vector<double> &a, const view1D<vector<double>, double> &b,
         vector<double> &y);
void div(const vector<double> &a, const view1D<vector<double>, double> &b,
         view1D<vector<double>, double> &y);
void div(const view1D<vector<double>, double> &a, const vector<double> &b,
         vector<double> &y);
void div(const view1D<vector<double>, double> &a, const vector<double> &b,
         view1D<vector<double>, double> &y);
void div(const view1D<vector<double>, double> &a,
         const view1D<vector<double>, double> &b, vector<double> &y);
void div(const view1D<vector<double>, double> &a,
         const view1D<vector<double>, double> &b,
         view1D<vector<double>, double> &y);
void div(const vector<float> &a, const vector<float> &b, vector<float> &y);
void div(const vector<float> &a, const vector<float> &b,
         view1D<vector<float>, float> &y);
void div(const vector<float> &a, const view1D<vector<float>, float> &b,
         vector<float> &y);
void div(const vector<float> &a, const view1D<vector<float>, float> &b,
         view1D<vector<float>, float> &y);
void div(const view1D<vector<float>, float> &a, const vector<float> &b,
         vector<float> &y);
void div(const view1D<vector<float>, float> &a, const vector<float> &b,
         view1D<vector<float>, float> &y);
void div(const view1D<vector<float>, float> &a,
         const view1D<vector<float>, float> &b, vector<float> &y);
void div(const view1D<vector<float>, float> &a,
         const view1D<vector<float>, float> &b,
         view1D<vector<float>, float> &y);

/**
 * @brief element by element addition of vector a and vector b.
 * @param a monolish vector (size N)
 * @param alpha scalar value
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void add(const vector<double> &a, const double alpha, vector<double> &y);
void add(const vector<double> &a, const double alpha,
         view1D<vector<double>, double> &y);
void add(const view1D<vector<double>, double> &a, const double alpha,
         vector<double> &y);
void add(const view1D<vector<double>, double> &a, const double alpha,
         view1D<vector<double>, double> &y);
void add(const vector<float> &a, const float alpha, vector<float> &y);
void add(const vector<float> &a, const float alpha,
         view1D<vector<float>, float> &y);
void add(const view1D<vector<float>, float> &a, const float alpha,
         vector<float> &y);
void add(const view1D<vector<float>, float> &a, const float alpha,
         view1D<vector<float>, float> &y);

/**
 * @brief element by element subtract of vector a and vector b.
 * @param a monolish vector (size N)
 * @param alpha scalar value
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void sub(const vector<double> &a, const double alpha, vector<double> &y);
void sub(const vector<double> &a, const double alpha,
         view1D<vector<double>, double> &y);
void sub(const view1D<vector<double>, double> &a, const double alpha,
         vector<double> &y);
void sub(const view1D<vector<double>, double> &a, const double alpha,
         view1D<vector<double>, double> &y);
void sub(const vector<float> &a, const float alpha, vector<float> &y);
void sub(const vector<float> &a, const float alpha,
         view1D<vector<float>, float> &y);
void sub(const view1D<vector<float>, float> &a, const float alpha,
         vector<float> &y);
void sub(const view1D<vector<float>, float> &a, const float alpha,
         view1D<vector<float>, float> &y);

/**
 * @brief element by element multiplication of vector a and vector b.
 * @param a monolish vector (size N)
 * @param alpha scalar value
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void mul(const vector<double> &a, const double alpha, vector<double> &y);
void mul(const vector<double> &a, const double alpha,
         view1D<vector<double>, double> &y);
void mul(const view1D<vector<double>, double> &a, const double alpha,
         vector<double> &y);
void mul(const view1D<vector<double>, double> &a, const double alpha,
         view1D<vector<double>, double> &y);
void mul(const vector<float> &a, const float alpha, vector<float> &y);
void mul(const vector<float> &a, const float alpha,
         view1D<vector<float>, float> &y);
void mul(const view1D<vector<float>, float> &a, const float alpha,
         vector<float> &y);
void mul(const view1D<vector<float>, float> &a, const float alpha,
         view1D<vector<float>, float> &y);

/**
 * @brief element by element division of vector a and vector b.
 * @param a monolish vector (size N)
 * @param alpha scalar value
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void div(const vector<double> &a, const double alpha, vector<double> &y);
void div(const vector<double> &a, const double alpha,
         view1D<vector<double>, double> &y);
void div(const view1D<vector<double>, double> &a, const double alpha,
         vector<double> &y);
void div(const view1D<vector<double>, double> &a, const double alpha,
         view1D<vector<double>, double> &y);
void div(const vector<float> &a, const float alpha, vector<float> &y);
void div(const vector<float> &a, const float alpha,
         view1D<vector<float>, float> &y);
void div(const view1D<vector<float>, float> &a, const float alpha,
         vector<float> &y);
void div(const view1D<vector<float>, float> &a, const float alpha,
         view1D<vector<float>, float> &y);

/**
 * @brief power to vector elements by double precision vector
 *(y[0:N] = pow(a[0:N], b[0]:N]))
 * @param a monolish vector (size N)
 * @param b monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void pow(const vector<double> &a, const vector<double> &b, vector<double> &y);
void pow(const vector<double> &a, const vector<double> &b,
         view1D<vector<double>, double> &y);
void pow(const vector<double> &a, const view1D<vector<double>, double> &b,
         vector<double> &y);
void pow(const vector<double> &a, const view1D<vector<double>, double> &b,
         view1D<vector<double>, double> &y);
void pow(const view1D<vector<double>, double> &a, const vector<double> &b,
         vector<double> &y);
void pow(const view1D<vector<double>, double> &a, const vector<double> &b,
         view1D<vector<double>, double> &y);
void pow(const view1D<vector<double>, double> &a,
         const view1D<vector<double>, double> &b, vector<double> &y);
void pow(const view1D<vector<double>, double> &a,
         const view1D<vector<double>, double> &b,
         view1D<vector<double>, double> &y);
void pow(const vector<float> &a, const vector<float> &b, vector<float> &y);
void pow(const vector<float> &a, const vector<float> &b,
         view1D<vector<float>, float> &y);
void pow(const vector<float> &a, const view1D<vector<float>, float> &b,
         vector<float> &y);
void pow(const vector<float> &a, const view1D<vector<float>, float> &b,
         view1D<vector<float>, float> &y);
void pow(const view1D<vector<float>, float> &a, const vector<float> &b,
         vector<float> &y);
void pow(const view1D<vector<float>, float> &a, const vector<float> &b,
         view1D<vector<float>, float> &y);
void pow(const view1D<vector<float>, float> &a,
         const view1D<vector<float>, float> &b, vector<float> &y);
void pow(const view1D<vector<float>, float> &a,
         const view1D<vector<float>, float> &b,
         view1D<vector<float>, float> &y);

/**
 * @brief power to vector elements by double precision scalar
 *value (y[0:N] = pow(a[0:N], alpha))
 * @param a monolish vector (size N)
 * @param alpha scalar value
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void pow(const vector<double> &a, const double alpha, vector<double> &y);
void pow(const vector<double> &a, const double alpha,
         view1D<vector<double>, double> &y);
void pow(const view1D<vector<double>, double> &a, const double alpha,
         vector<double> &y);
void pow(const view1D<vector<double>, double> &a, const double alpha,
         view1D<vector<double>, double> &y);
void pow(const vector<float> &a, const float alpha, vector<float> &y);
void pow(const vector<float> &a, const float alpha,
         view1D<vector<float>, float> &y);
void pow(const view1D<vector<float>, float> &a, const float alpha,
         vector<float> &y);
void pow(const view1D<vector<float>, float> &a, const float alpha,
         view1D<vector<float>, float> &y);

/**
 * @brief sin to vector elements (y[0:N] = sin(a[0:N]))
 * @param a monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void sin(const vector<double> &a, vector<double> &y);
void sin(const vector<double> &a, view1D<vector<double>, double> &y);
void sin(const view1D<vector<double>, double> &a, vector<double> &y);
void sin(const view1D<vector<double>, double> &a,
         view1D<vector<double>, double> &y);
void sin(const vector<float> &a, vector<float> &y);
void sin(const vector<float> &a, view1D<vector<float>, float> &y);
void sin(const view1D<vector<float>, float> &a, vector<float> &y);
void sin(const view1D<vector<float>, float> &a,
         view1D<vector<float>, float> &y);

/**
 * @brief sqrt to vector elements (y[0:N] = sqrt(a[0:N]))
 * @param a monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void sqrt(const vector<double> &a, vector<double> &y);
void sqrt(const vector<double> &a, view1D<vector<double>, double> &y);
void sqrt(const view1D<vector<double>, double> &a, vector<double> &y);
void sqrt(const view1D<vector<double>, double> &a,
          view1D<vector<double>, double> &y);
void sqrt(const vector<float> &a, vector<float> &y);
void sqrt(const vector<float> &a, view1D<vector<float>, float> &y);
void sqrt(const view1D<vector<float>, float> &a, vector<float> &y);
void sqrt(const view1D<vector<float>, float> &a,
          view1D<vector<float>, float> &y);

/**
 * @brief sinh to vector elements (y[0:N] = sinh(a[0:N]))
 * @param a monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void sinh(const vector<double> &a, vector<double> &y);
void sinh(const vector<double> &a, view1D<vector<double>, double> &y);
void sinh(const view1D<vector<double>, double> &a, vector<double> &y);
void sinh(const view1D<vector<double>, double> &a,
          view1D<vector<double>, double> &y);
void sinh(const vector<float> &a, vector<float> &y);
void sinh(const vector<float> &a, view1D<vector<float>, float> &y);
void sinh(const view1D<vector<float>, float> &a, vector<float> &y);
void sinh(const view1D<vector<float>, float> &a,
          view1D<vector<float>, float> &y);

/**
 * @brief asin to vector elements (y[0:N] = asin(a[0:N]))
 * @param a monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void asin(const vector<double> &a, vector<double> &y);
void asin(const vector<double> &a, view1D<vector<double>, double> &y);
void asin(const view1D<vector<double>, double> &a, vector<double> &y);
void asin(const view1D<vector<double>, double> &a,
          view1D<vector<double>, double> &y);
void asin(const vector<float> &a, vector<float> &y);
void asin(const vector<float> &a, view1D<vector<float>, float> &y);
void asin(const view1D<vector<float>, float> &a, vector<float> &y);
void asin(const view1D<vector<float>, float> &a,
          view1D<vector<float>, float> &y);

/**
 * @brief asinh to vector elements (y[0:N] = asinh(a[0:N]))
 * @param a monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void asinh(const vector<double> &a, vector<double> &y);
void asinh(const vector<double> &a, view1D<vector<double>, double> &y);
void asinh(const view1D<vector<double>, double> &a, vector<double> &y);
void asinh(const view1D<vector<double>, double> &a,
           view1D<vector<double>, double> &y);
void asinh(const vector<float> &a, vector<float> &y);
void asinh(const vector<float> &a, view1D<vector<float>, float> &y);
void asinh(const view1D<vector<float>, float> &a, vector<float> &y);
void asinh(const view1D<vector<float>, float> &a,
           view1D<vector<float>, float> &y);

/**
 * @brief tan to vector elements (y[0:N] = tan(a[0:N]))
 * @param a monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void tan(const vector<double> &a, vector<double> &y);
void tan(const vector<double> &a, view1D<vector<double>, double> &y);
void tan(const view1D<vector<double>, double> &a, vector<double> &y);
void tan(const view1D<vector<double>, double> &a,
         view1D<vector<double>, double> &y);
void tan(const vector<float> &a, vector<float> &y);
void tan(const vector<float> &a, view1D<vector<float>, float> &y);
void tan(const view1D<vector<float>, float> &a, vector<float> &y);
void tan(const view1D<vector<float>, float> &a,
         view1D<vector<float>, float> &y);

/**
 * @brief tanh to vector elements (y[0:N] = tanh(a[0:N]))
 * @param a monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void tanh(const vector<double> &a, vector<double> &y);
void tanh(const vector<double> &a, view1D<vector<double>, double> &y);
void tanh(const view1D<vector<double>, double> &a, vector<double> &y);
void tanh(const view1D<vector<double>, double> &a,
          view1D<vector<double>, double> &y);
void tanh(const vector<float> &a, vector<float> &y);
void tanh(const vector<float> &a, view1D<vector<float>, float> &y);
void tanh(const view1D<vector<float>, float> &a, vector<float> &y);
void tanh(const view1D<vector<float>, float> &a,
          view1D<vector<float>, float> &y);

/**
 * @brief atan to vector elements (y[0:N] = atan(a[0:N]))
 * @param a monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void atan(const vector<double> &a, vector<double> &y);
void atan(const vector<double> &a, view1D<vector<double>, double> &y);
void atan(const view1D<vector<double>, double> &a, vector<double> &y);
void atan(const view1D<vector<double>, double> &a,
          view1D<vector<double>, double> &y);
void atan(const vector<float> &a, vector<float> &y);
void atan(const vector<float> &a, view1D<vector<float>, float> &y);
void atan(const view1D<vector<float>, float> &a, vector<float> &y);
void atan(const view1D<vector<float>, float> &a,
          view1D<vector<float>, float> &y);

/**
 * @brief atanh to vector elements (y[0:N] = atanh(a[0:N]))
 * @param a monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void atanh(const vector<double> &a, vector<double> &y);
void atanh(const vector<double> &a, view1D<vector<double>, double> &y);
void atanh(const view1D<vector<double>, double> &a, vector<double> &y);
void atanh(const view1D<vector<double>, double> &a,
           view1D<vector<double>, double> &y);
void atanh(const vector<float> &a, vector<float> &y);
void atanh(const vector<float> &a, view1D<vector<float>, float> &y);
void atanh(const view1D<vector<float>, float> &a, vector<float> &y);
void atanh(const view1D<vector<float>, float> &a,
           view1D<vector<float>, float> &y);

/**
 * @brief ceil to vector elements (y[0:N] = ceil(a[0:N]))
 * @param a monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void ceil(const vector<double> &a, vector<double> &y);
void ceil(const vector<double> &a, view1D<vector<double>, double> &y);
void ceil(const view1D<vector<double>, double> &a, vector<double> &y);
void ceil(const view1D<vector<double>, double> &a,
          view1D<vector<double>, double> &y);
void ceil(const vector<float> &a, vector<float> &y);
void ceil(const vector<float> &a, view1D<vector<float>, float> &y);
void ceil(const view1D<vector<float>, float> &a, vector<float> &y);
void ceil(const view1D<vector<float>, float> &a,
          view1D<vector<float>, float> &y);

/**
 * @brief floor to vector elements (y[0:N] = floor(a[0:N]))
 * @param a monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void floor(const vector<double> &a, vector<double> &y);
void floor(const vector<double> &a, view1D<vector<double>, double> &y);
void floor(const view1D<vector<double>, double> &a, vector<double> &y);
void floor(const view1D<vector<double>, double> &a,
           view1D<vector<double>, double> &y);
void floor(const vector<float> &a, vector<float> &y);
void floor(const vector<float> &a, view1D<vector<float>, float> &y);
void floor(const view1D<vector<float>, float> &a, vector<float> &y);
void floor(const view1D<vector<float>, float> &a,
           view1D<vector<float>, float> &y);

/**
 * @brief sign to vector elements (y[0:N] = sign(a[0:N]))
 * @param a monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void sign(const vector<double> &a, vector<double> &y);
void sign(const vector<double> &a, view1D<vector<double>, double> &y);
void sign(const view1D<vector<double>, double> &a, vector<double> &y);
void sign(const view1D<vector<double>, double> &a,
          view1D<vector<double>, double> &y);
void sign(const vector<float> &a, vector<float> &y);
void sign(const vector<float> &a, view1D<vector<float>, float> &y);
void sign(const view1D<vector<float>, float> &a, vector<float> &y);
void sign(const view1D<vector<float>, float> &a,
          view1D<vector<float>, float> &y);

/**
 * @brief Create a new vector with greatest elements of two matrices (y[0:N] =
 * max(a[0:N], b[0:N]))
 * @param a monolish vector (size N)
 * @param b monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void max(const vector<double> &a, const vector<double> &b, vector<double> &y);
void max(const vector<double> &a, const vector<double> &b,
         view1D<vector<double>, double> &y);
void max(const vector<double> &a, const view1D<vector<double>, double> &b,
         vector<double> &y);
void max(const vector<double> &a, const view1D<vector<double>, double> &b,
         view1D<vector<double>, double> &y);
void max(const view1D<vector<double>, double> &a, const vector<double> &b,
         vector<double> &y);
void max(const view1D<vector<double>, double> &a, const vector<double> &b,
         view1D<vector<double>, double> &y);
void max(const view1D<vector<double>, double> &a,
         const view1D<vector<double>, double> &b, vector<double> &y);
void max(const view1D<vector<double>, double> &a,
         const view1D<vector<double>, double> &b,
         view1D<vector<double>, double> &y);
void max(const vector<float> &a, const vector<float> &b, vector<float> &y);
void max(const vector<float> &a, const vector<float> &b,
         view1D<vector<float>, float> &y);
void max(const vector<float> &a, const view1D<vector<float>, float> &b,
         vector<float> &y);
void max(const vector<float> &a, const view1D<vector<float>, float> &b,
         view1D<vector<float>, float> &y);
void max(const view1D<vector<float>, float> &a, const vector<float> &b,
         vector<float> &y);
void max(const view1D<vector<float>, float> &a, const vector<float> &b,
         view1D<vector<float>, float> &y);
void max(const view1D<vector<float>, float> &a,
         const view1D<vector<float>, float> &b, vector<float> &y);
void max(const view1D<vector<float>, float> &a,
         const view1D<vector<float>, float> &b,
         view1D<vector<float>, float> &y);

/**
 * @brief Create a new vector with smallest elements of two matrices (y[0:N] =
 * min(a[0:N], b[0:N]))
 * @param a monolish vector (size N)
 * @param b monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void min(const vector<double> &a, const vector<double> &b, vector<double> &y);
void min(const vector<double> &a, const vector<double> &b,
         view1D<vector<double>, double> &y);
void min(const vector<double> &a, const view1D<vector<double>, double> &b,
         vector<double> &y);
void min(const vector<double> &a, const view1D<vector<double>, double> &b,
         view1D<vector<double>, double> &y);
void min(const view1D<vector<double>, double> &a, const vector<double> &b,
         vector<double> &y);
void min(const view1D<vector<double>, double> &a, const vector<double> &b,
         view1D<vector<double>, double> &y);
void min(const view1D<vector<double>, double> &a,
         const view1D<vector<double>, double> &b, vector<double> &y);
void min(const view1D<vector<double>, double> &a,
         const view1D<vector<double>, double> &b,
         view1D<vector<double>, double> &y);
void min(const vector<float> &a, const vector<float> &b, vector<float> &y);
void min(const vector<float> &a, const vector<float> &b,
         view1D<vector<float>, float> &y);
void min(const vector<float> &a, const view1D<vector<float>, float> &b,
         vector<float> &y);
void min(const vector<float> &a, const view1D<vector<float>, float> &b,
         view1D<vector<float>, float> &y);
void min(const view1D<vector<float>, float> &a, const vector<float> &b,
         vector<float> &y);
void min(const view1D<vector<float>, float> &a, const vector<float> &b,
         view1D<vector<float>, float> &y);
void min(const view1D<vector<float>, float> &a,
         const view1D<vector<float>, float> &b, vector<float> &y);
void min(const view1D<vector<float>, float> &a,
         const view1D<vector<float>, float> &b,
         view1D<vector<float>, float> &y);

/**
 * @brief Finds the greatest element in vector (max(y[0:N]))
 * @param y monolish vector (size N)
 * @return greatest value
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
double max(const vector<double> &y);
double max(const view1D<vector<double>, double> &y);
float max(const vector<float> &y);
float max(const view1D<vector<float>, float> &y);

/**
 * @brief Finds the smallest element in vector (min(y[0:N]))
 * @param y monolish vector (size N)
 * @return smallest value
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
double min(const vector<double> &y);
double min(const view1D<vector<double>, double> &y);
float min(const vector<float> &y);
float min(const view1D<vector<float>, float> &y);

/**
 * @brief reciprocal to double precision vector elements (y[0:N] = 1 / a[0:N])
 * @param a monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void reciprocal(const vector<double> &a, vector<double> &y);
void reciprocal(const vector<double> &a, view1D<vector<double>, double> &y);
void reciprocal(const view1D<vector<double>, double> &a, vector<double> &y);
void reciprocal(const view1D<vector<double>, double> &a,
                view1D<vector<double>, double> &y);
void reciprocal(const vector<float> &a, vector<float> &y);
void reciprocal(const vector<float> &a, view1D<vector<float>, float> &y);
void reciprocal(const view1D<vector<float>, float> &a, vector<float> &y);
void reciprocal(const view1D<vector<float>, float> &a,
                view1D<vector<float>, float> &y);

} // namespace vml
} // namespace monolish
