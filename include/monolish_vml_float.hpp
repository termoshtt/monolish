#pragma once
#include "common/monolish_common.hpp"
#include <stdio.h>
#include <vector>

#if defined USE_MPI
#include <mpi.h>
#endif

namespace monolish {
/**
 * @brief
 * Vector and Matrix element-wise math library
 */
namespace vml {

//////////////////////////////////////////////////////
//  Vector
//////////////////////////////////////////////////////

/**
 * @brief single precision element by element addition of vector a and vector b.
 * @param a single precision monolish vector (size N)
 * @param b single precision monolish vector (size N)
 * @param y single precision monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void add(const vector<float> &a, const vector<float> &b, vector<float> &y);

/**
 * @brief single precision element by element subtraction of vector a and vector
 * b.
 * @param a single precision monolish vector (size N)
 * @param b single precision monolish vector (size N)
 * @param y single precision monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void sub(const vector<float> &a, const vector<float> &b, vector<float> &y);

/**
 * @brief single precision element by element multiplication of vector a and
 * vector b.
 * @param a single precision monolish vector (size N)
 * @param b single precision monolish vector (size N)
 * @param y single precision monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void mul(const vector<float> &a, const vector<float> &b, vector<float> &y);

/**
 * @brief single precision element by element division of vector a and vector b.
 * @param a single precision monolish vector (size N)
 * @param b single precision monolish vector (size N)
 * @param y single precision monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void div(const vector<float> &a, const vector<float> &b, vector<float> &y);

/**
 * @brief single precision scalar and vector addition (y[i] = a[i] + alpha)
 * @param a single precision monolish vector (size N)
 * @param alpha single precision scalar value
 * @param y single precision monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void add(const vector<float> &a, const float alpha, vector<float> &y);

/**
 * @brief single precision scalar and vector subtraction (y[i] = a[i] - alpha)
 * @param a single precision monolish vector (size N)
 * @param alpha single precision scalar value
 * @param y single precision monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void sub(const vector<float> &a, const float alpha, vector<float> &y);

/**
 * @brief single precision scalar and vector multiplication (y[i] = a[i] *
 * alpha)
 * @param a single precision monolish vector (size N)
 * @param alpha single precision scalar value
 * @param y single precision monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void mul(const vector<float> &a, const float alpha, vector<float> &y);

/**
 * @brief single precision scalar and vector division (y[i] = a[i] / alpha)
 * @param a single precision monolish vector (size N)
 * @param alpha single precision scalar value
 * @param y single precision monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void div(const vector<float> &a, const float alpha, vector<float> &y);

/**
 * @brief power to single precision vector elements by single precision scalar
 *value (y[0:N] = pow(a[0:N], alpha))
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void pow(const vector<float> &a, const vector<float> &b, vector<float> &y);

/**
 * @brief power to single precision vector elements by single precision vector
 *(y[0:N] = pow(a[0:N], b[0]:N]))
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void pow(const vector<float> &a, const float alpha, vector<float> &y);

/**
 * @brief sqrt to single precision vector elements (y[0:N] = sqrt(a[0:N]))
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void sqrt(const vector<float> &a, vector<float> &y);

/**
 * @brief sin to single precision vector elements (y[0:N] = sin(a[0:N]))
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void sin(const vector<float> &a, vector<float> &y);

/**
 * @brief sinh to single precision vector elements (y[0:N] = sinh(a[0:N]))
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void sinh(const vector<float> &a, vector<float> &y);

/**
 * @brief asin to single precision vector elements (y[0:N] = asin(a[0:N]))
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void asin(const vector<float> &a, vector<float> &y);

/**
 * @brief asinh to single precision vector elements (y[0:N] = asinh(a[0:N]))
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void asinh(const vector<float> &a, vector<float> &y);

/**
 * @brief tan to single precision vector elements (y[0:N] = tan(a[0:N]))
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void tan(const vector<float> &a, vector<float> &y);

/**
 * @brief tanh to single precision vector elements (y[0:N] = tanh(a[0:N]))
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void tanh(const vector<float> &a, vector<float> &y);

/**
 * @brief atan to single precision vector elements (y[0:N] = atan(a[0:N]))
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void atan(const vector<float> &a, vector<float> &y);

/**
 * @brief atanh to single precision vector elements (y[0:N] = atanh(a[0:N]))
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void atanh(const vector<float> &a, vector<float> &y);

/**
 * @brief ceil to single precision vector elements (y[0:N] = ceil(a[0:N]))
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void ceil(const vector<float> &a, vector<float> &y);

/**
 * @brief floor to single precision vector elements (y[0:N] = floor(a[0:N]))
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void floor(const vector<float> &a, vector<float> &y);

/**
 * @brief sign inversion to single precision vector elements (y[0:N] =
 *sign(a[0:N]))
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void sign(const vector<float> &a, vector<float> &y);

/**
 * @brief reciprocal to single precision vector elements (y[0:N] =
 * 1 / a[0:N])
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void reciprocal(const vector<float> &a, vector<float> &y);

/**
 * @brief Create a new vector with greatest elements of two vectors (y[0:N] =
 *max(a[0:N], b[0]:N]))
 * @param a single precision monolish vector (size N)
 * @param b single precision monolish vector (size N)
 * @param y single precision monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void max(const vector<float> &a, const vector<float> &b, vector<float> &y);

/**
 * @brief Create a new vector with smallest elements of two vectors (y[0:N] =
 *max(a[0:N], b[0]:N]))
 * @param a single precision monolish vector (size N)
 * @param b single precision monolish vector (size N)
 * @param y single precision monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void min(const vector<float> &a, const vector<float> &b, vector<float> &y);

/**
 * @brief Finds the greatest element in single precision vector
 *(max_element(y[0:N]))
 * @param y single precision monolish vector (size N)
 * @return greatest value
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
float max(const vector<float> &y);

/**
 * @brief Finds the smallest element in single precision vector
 *(max_element(y[0:N]))
 * @param y single precision monolish vector (size N)
 * @return smallest value
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
float min(const vector<float> &y);

//////////////////////////////////////////////////////
// Dense
//////////////////////////////////////////////////////
/**
 * @brief single precision element by element addition of Dense matrix A and
 * Dense matrix B.
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param B single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void add(const matrix::Dense<float> &A, const matrix::Dense<float> &B,
         matrix::Dense<float> &C);

/**
 * @brief single precision element by element subtraction of Dense matrix A and
 * Dense matrix B.
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param B single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void sub(const matrix::Dense<float> &A, const matrix::Dense<float> &B,
         matrix::Dense<float> &C);

/**
 * @brief single precision element by element multiplication of Dense matrix A
 * and Dense matrix B.
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param B single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void mul(const matrix::Dense<float> &A, const matrix::Dense<float> &B,
         matrix::Dense<float> &C);

/**
 * @brief single precision element by element division of Dense matrix A and
 * Dense matrix B.
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param B single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void div(const matrix::Dense<float> &A, const matrix::Dense<float> &B,
         matrix::Dense<float> &C);

/**
 * @brief single precision scalar and Dence matrix addition (C[i][j] = A[i][j] +
 * alpha)
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param alpha single precision scalar value
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void add(const matrix::Dense<float> &A, const float alpha,
         matrix::Dense<float> &C);

/**
 * @brief single precision scalar and Dence matrix subtraction (C[i][j] =
 * A[i][j] + alpha)
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param alpha single precision scalar value
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void sub(const matrix::Dense<float> &A, const float alpha,
         matrix::Dense<float> &C);

/**
 * @brief single precision scalar and Dence matrix multiplication (C[i][j] =
 * A[i][j] + alpha)
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param alpha single precision scalar value
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void mul(const matrix::Dense<float> &A, const float alpha,
         matrix::Dense<float> &C);

/**
 * @brief single precision scalar and Dence matrix division (C[i][j] = A[i][j] +
 * alpha)
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param alpha single precision scalar value
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void div(const matrix::Dense<float> &A, const float alpha,
         matrix::Dense<float> &C);

/**
 * @brief power to single precision dense matrix elements by single precision
 *dense matrix (C[0:N] = pow(A[0:N], B[0:N]))
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param B single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void pow(const matrix::Dense<float> &A, const matrix::Dense<float> &B,
         matrix::Dense<float> &C);

/**
 * @brief power to single precision dense matrix elements by single precision
 *scalar value (C[0:N] = pow(A[0:N], alpha))
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param alpha single precision scalar value
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void pow(const matrix::Dense<float> &A, const float alpha,
         matrix::Dense<float> &C);

/**
 * @brief sqrt to single precision dense matrix elements (C[0:N] = sqrt(A[0:N]))
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void sqrt(const matrix::Dense<float> &A, matrix::Dense<float> &C);

/**
 * @brief sin to single precision dense matrix elements (C[0:N] = sin(A[0:N]))
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void sin(const matrix::Dense<float> &A, matrix::Dense<float> &C);

/**
 * @brief sinh to single precision dense matrix elements (C[0:N] = sinh(A[0:N]))
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void sinh(const matrix::Dense<float> &A, matrix::Dense<float> &C);

/**
 * @brief asin to single precision dense matrix elements (C[0:N] = asin(A[0:N]))
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void asin(const matrix::Dense<float> &A, matrix::Dense<float> &C);

/**
 * @brief asinh to single precision dense matrix elements (C[0:N] =
 *asinh(A[0:N]))
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void asinh(const matrix::Dense<float> &A, matrix::Dense<float> &C);

/**
 * @brief tan to single precision dense matrix elements (C[0:N] = tan(A[0:N]))
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void tan(const matrix::Dense<float> &A, matrix::Dense<float> &C);

/**
 * @brief tanh to single precision dense matrix elements (C[0:N] = tanh(A[0:N]))
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void tanh(const matrix::Dense<float> &A, matrix::Dense<float> &C);

/**
 * @brief atan to single precision dense matrix elements (C[0:N] = atan(A[0:N]))
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void atan(const matrix::Dense<float> &A, matrix::Dense<float> &C);

/**
 * @brief atanh to single precision dense matrix elements (C[0:N] =
 *atanh(A[0:N]))
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void atanh(const matrix::Dense<float> &A, matrix::Dense<float> &C);

/**
 * @brief ceil to single precision dense matrix elements (C[0:N] = ceil(A[0:N]))
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void ceil(const matrix::Dense<float> &A, matrix::Dense<float> &C);

/**
 * @brief floor to single precision dense matrix elements (C[0:N] =
 *floor(A[0:N]))
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void floor(const matrix::Dense<float> &A, matrix::Dense<float> &C);

/**
 * @brief sign inversion to single precision dense matrix elements (C[0:N] =
 *sign(A[0:N]))
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void sign(const matrix::Dense<float> &A, matrix::Dense<float> &C);

/**
 * @brief reciprocal to single precision dense matrix elements (C[0:N] =
 * 1 / A[0:N])
 * @param A single precision monolish Dense Matrix (size M x N)
 * @param C single precision monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void reciprocal(const matrix::Dense<float> &A, matrix::Dense<float> &C);

/**
 * @brief Create a new matrix with greatest elements of two matrices (C[0:nnz] =
 *A(a[0:nnz], B[0]:nnz]))
 * @param A single precision monolish Dense matrix (size M x N)
 * @param B single precision monolish Dense matrix (size M x N)
 * @param C single precision monolish Dense matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void max(const matrix::Dense<float> &A, const matrix::Dense<float> &B,
         matrix::Dense<float> &C);

/**
 * @brief Create a new matrix with smallest elements of two matrices (C[0:nnz] =
 *A(a[0:nnz], B[0]:nnz]))
 * @param A single precision monolish Dense matrix (size M x N)
 * @param B single precision monolish Dense matrix (size M x N)
 * @param C single precision monolish Dense matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
void min(const matrix::Dense<float> &A, const matrix::Dense<float> &B,
         matrix::Dense<float> &C);

/**
 * @brief Finds the greatest element in single precision Dense matrices
 *(max_element(C[0:nnz]))
 * @param C single precision monolish Dense matrix (size M x N)
 * @return greatest value
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
float max(const matrix::Dense<float> &C);
/**
 * @brief Finds the greatest element in single precision Dense matrices
 *(max_element(C[0:nnz]))
 * @param C single precision monolish Dense matrix (size M x N)
 * @return greatest value
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
float min(const matrix::Dense<float> &C);
//////////////////////////////////////////////////////
// CRS
//////////////////////////////////////////////////////

/**
 * @brief single precision element by element addition of CRS matrix A and CRS
 * matrix B.
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param B single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 * @warning
 * A, B, and C must be same non-zero structure 
 */
void add(const matrix::CRS<float> &A, const matrix::CRS<float> &B,
         matrix::CRS<float> &C);

/**
 * @brief single precision element by element subtraction of CRS matrix A and
 * CRS matrix B.
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param B single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 * @warning
 * A, B, and C must be same non-zero structure 
 */
void sub(const matrix::CRS<float> &A, const matrix::CRS<float> &B,
         matrix::CRS<float> &C);

/**
 * @brief single precision element by element multiplication of CRS matrix A and
 * CRS matrix B.
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param B single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 * @warning
 * A, B, and C must be same non-zero structure 
 */
void mul(const matrix::CRS<float> &A, const matrix::CRS<float> &B,
         matrix::CRS<float> &C);

/**
 * @brief single precision element by element division of CRS matrix A and CRS
 * matrix B.
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param B single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 * @warning
 * A, B, and C must be same non-zero structure 
 */
void div(const matrix::CRS<float> &A, const matrix::CRS<float> &B,
         matrix::CRS<float> &C);

/**
 * @brief single precision scalar and Dence matrix addition (C[i][j] = A[i][j] +
 * alpha)
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param alpha single precision scalar value
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 * @warning
 * A and C must be same non-zero structure
 */
void add(const matrix::CRS<float> &A, const float alpha,
         matrix::CRS<float> &C);

/**
 * @brief single precision scalar and Dence matrix subtraction (C[i][j] =
 * A[i][j] + alpha)
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param alpha single precision scalar value
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 * @warning
 * A and C must be same non-zero structure 
 */
void sub(const matrix::CRS<float> &A, const float alpha,
         matrix::CRS<float> &C);

/**
 * @brief single precision scalar and Dence matrix multiplication (C[i][j] =
 * A[i][j] + alpha)
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param alpha single precision scalar value
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 * @warning
 * A and C must be same non-zero structure
 */
void mul(const matrix::CRS<float> &A, const float alpha,
         matrix::CRS<float> &C);

/**
 * @brief single precision scalar and Dence matrix division (C[i][j] = A[i][j] +
 * alpha)
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param alpha single precision scalar value
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 * @warning
 * A and C must be same non-zero structure
 */
void div(const matrix::CRS<float> &A, const float alpha,
         matrix::CRS<float> &C);

/**
 * @brief power to single precision CRS matrix elements by single precision CRS
 *matrix (C[0:N] = pow(A[0:N], b[0:N]))
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param B single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B and C must be same non-zero structure
 **/
void pow(const matrix::CRS<float> &A, const matrix::CRS<float> &B,
         matrix::CRS<float> &C);

/**
 * @brief power to single precision CRS matrix elements by single precision
 *scalar value (C[0:N] = pow(A[0:N], alpha))
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param alpha single precision scalar value
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A and C must be same non-zero structure
 **/
void pow(const matrix::CRS<float> &A, const float alpha,
         matrix::CRS<float> &C);

/**
 * @brief sqrt to single precision CRS matrix elements (C[0:N] = sqrt(A[0:N]))
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param B single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B and C must be same non-zero structure
 **/
void sqrt(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief sin to single precision CRS matrix elements (C[0:N] = sin(A[0:N]))
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param B single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B and C must be same non-zero structure
 **/
void sin(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief sinh to single precision CRS matrix elements (C[0:N] = sinh(A[0:N]))
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param B single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B and C must be same non-zero structure
 **/
void sinh(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief asin to single precision CRS matrix elements (C[0:N] = asin(A[0:N]))
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param B single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B and C must be same non-zero structure
 **/
void asin(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief asinh to single precision CRS matrix elements (C[0:N] = asinh(A[0:N]))
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param B single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B and C must be same non-zero structure
 **/
void asinh(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief tan to single precision CRS matrix elements (C[0:N] = tan(A[0:N]))
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param B single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B and C must be same non-zero structure
 **/
void tan(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief tanh to single precision CRS matrix elements (C[0:N] = tanh(A[0:N]))
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param B single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B and C must be same non-zero structure
 **/
void tanh(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief atan to single precision CRS matrix elements (C[0:N] = atan(A[0:N]))
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param B single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B and C must be same non-zero structure 
 **/
void atan(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief atanh to single precision CRS matrix elements (C[0:N] = atanh(A[0:N]))
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param B single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A and C must be same non-zero structure 
 **/
void atanh(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief ceil to single precision CRS matrix elements (C[0:N] = ceil(A[0:N]))
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param B single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A and C must be same non-zero structure
 **/
void ceil(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief floor to single precision CRS matrix elements (C[0:N] = floor(A[0:N]))
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param B single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A and C must be same non-zero structure
 **/
void floor(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief sign inversion to single precision CRS matrix elements (C[0:N] =
 *sign(A[0:N]))
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param B single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A and C must be same non-zero structure
 **/
void sign(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief reciprocal to single precision dense matrix elements (C[0:N] =
 * 1 / A[0:N])
 * @param A single precision monolish CRS Matrix (size M x N)
 * @param C single precision monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A and C must be same non-zero structure 
 **/
void reciprocal(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief Create a new matrix with greatest elements of two matrices (C[0:nnz] =
 *A(a[0:nnz], B[0]:nnz]))
 * @param A single precision monolish CRS matrix (size M x N)
 * @param B single precision monolish CRS matrix (size M x N)
 * @param C single precision monolish CRS matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B and C must be same non-zero structure 
 **/
void max(const matrix::CRS<float> &A, const matrix::CRS<float> &B,
         matrix::CRS<float> &C);

/**
 * @brief Create a new matrix with smallest elements of two matrices (C[0:nnz] =
 *A(a[0:nnz], B[0]:nnz]))
 * @param A single precision monolish CRS matrix (size M x N)
 * @param B single precision monolish CRS matrix (size M x N)
 * @param C single precision monolish CRS matrix (size M x N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B and C must be same non-zero structure 
 **/
void min(const matrix::CRS<float> &A, const matrix::CRS<float> &B,
         matrix::CRS<float> &C);

/**
 * @brief Finds the greatest element in single precision CRS matrices
 *(max_element(C[0:nnz]))
 * @param C single precision monolish CRS matrix (size M x N)
 * @return greatest value
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
float max(const matrix::CRS<float> &C);
/**
 * @brief Finds the greatest element in single precision CRS matrices
 *(max_element(C[0:nnz]))
 * @param C single precision monolish CRS matrix (size M x N)
 * @return greatest value
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 **/
float min(const matrix::CRS<float> &C);

//////////////////////////////////////////////////////
//  LinearOperator
//////////////////////////////////////////////////////

/**
 * @brief single precision element by element addition of LinearOperator A and
 * LinearOperator B.
 * @param A single precision monolish LinearOperator (size M x N)
 * @param B single precision monolish LinearOperator (size M x N)
 * @param C single precision monolish LinearOperator (size M x N)
 * @note
 * - # of computation: 2 functions
 * - Multi-threading: false
 * - GPU acceleration: false
 */
void add(const matrix::LinearOperator<float> &A,
         const matrix::LinearOperator<float> &B,
         matrix::LinearOperator<float> &C);

/**
 * @brief single precision element by element subtraction of LinearOperator A
 * and LinearOperator B.
 * @param A single precision monolish LinearOperator (size M x N)
 * @param B single precision monolish LinearOperator (size M x N)
 * @param C single precision monolish LinearOperator (size M x N)
 * @note
 * - # of computation: 2 functions
 * - Multi-threading: false
 * - GPU acceleration: false
 */
void sub(const matrix::LinearOperator<float> &A,
         const matrix::LinearOperator<float> &B,
         matrix::LinearOperator<float> &C);

/**
 * @brief single precision scalar and LinearOperator addition (C[i][j] = A[i][j]
 * + alpha)
 * @param A single precision monolish LinearOperator (size M x N)
 * @param alpha single precision scalar value
 * @param C single precision monolish LinearOperator (size M x N)
 * @note
 * - # of computation: 2 functions
 * - Multi-threading: false
 * - GPU acceleration: false
 */
void add(const matrix::LinearOperator<float> &A, const float &alpha,
         matrix::LinearOperator<float> &C);

/**
 * @brief single precision scalar and LinearOperator subtraction (C[i][j] =
 * A[i][j] - alpha)
 * @param A single precision monolish LinearOperator (size M x N)
 * @param alpha single precision scalar value
 * @param C single precision monolish LinearOperator (size M x N)
 * @note
 * - # of computation: 2 functions
 * - Multi-threading: false
 * - GPU acceleration: false
 */
void sub(const matrix::LinearOperator<float> &A, const float &alpha,
         matrix::LinearOperator<float> &C);

/**
 * @brief single precision scalar and LinearOperator multiplication (C[i][j] =
 * A[i][j] * alpha)
 * @param A single precision monolish LinearOperator (size M x N)
 * @param alpha single precision scalar value
 * @param C single precision monolish LinearOperator (size M x N)
 * @note
 * - # of computation: 2 functions
 * - Multi-threading: false
 * - GPU acceleration: false
 */
void mul(const matrix::LinearOperator<float> &A, const float &alpha,
         matrix::LinearOperator<float> &C);

/**
 * @brief single precision scalar and LinearOperator division (C[i][j] = A[i][j]
 * / alpha)
 * @param A single precision monolish LinearOperator (size M x N)
 * @param alpha single precision scalar value
 * @param C single precision monolish LinearOperator (size M x N)
 * @note
 * - # of computation: 2 functions
 * - Multi-threading: false
 * - GPU acceleration: false
 */
void div(const matrix::LinearOperator<float> &A, const float &alpha,
         matrix::LinearOperator<float> &C);

} // namespace vml
} // namespace monolish
