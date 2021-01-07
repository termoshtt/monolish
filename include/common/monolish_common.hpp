#pragma once
#include "monolish_dense.hpp"
#include "monolish_logger.hpp"
#include "monolish_matrix.hpp"
#include "monolish_vector.hpp"
#include <initializer_list>

// error code
#define MONOLISH_SOLVER_SUCCESS 0
#define MONOLISH_SOLVER_SIZE_ERROR -1
#define MONOLISH_SOLVER_MAXITER -2
#define MONOLISH_SOLVER_BREAKDOWN -3
#define MONOLISH_SOLVER_RESIDUAL_NAN -4
#define MONOLISH_SOLVER_NOT_IMPL -10

namespace monolish {
/**
 * @brief monolish utilities
 */
namespace util {

/**
 * @brief get nrm |b-Ax|_2
 * @param A CRS matrix (size M x N)
 * @param x monolish vector (size N)
 * @param b monolish vector (size N)
 * @note
 * - # of computation: 2*M*nnz + N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
template <typename T>
T get_residual_l2(matrix::CRS<T> &A, vector<T> &x, vector<T> &b);

/**
 * @brief get nrm |b-Ax|_2
 * @param A CRS matrix (size M x N)
 * @param x monolish vector (size N)
 * @param b monolish vector (size N)
 * @note
 * - # of computation: 2*M*nnz + N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
template <typename T>
T get_residual_l2(matrix::Dense<T> &A, vector<T> &x, vector<T> &b);

/**
 * @brief check error
 * @param[in] err solver err code
 * @note
 * - MONOLISH_SOLVER_SUCCESS 0
 * - MONOLISH_SOLVER_SIZE_ERROR -1
 * - MONOLISH_SOLVER_MAXITER -2
 * - MONOLISH_SOLVER_BREAKDOWN -3
 * - MONOLISH_SOLVER_RESIDUAL_NAN -4
 * - MONOLISH_SOLVER_NOT_IMPL -10
 */
bool solver_check(const int err);

/// Logger utils ///////////////////////////////
/**
 * @brief Specifying the log level
 * @param Level loglevel
 * @note loglevel is
 * 1. logging solvers (CG, Jacobi, LU...etc.)
 * 2. logging solvers and BLAS functions (matmul, matvec, arithmetic
 *operators..etc.)
 * 3. logging solvers and BLAS functions and utils (send, recv,
 *allocation...etc.)
 **/
void set_log_level(size_t Level);

/**
 * @brief Specifying the log finename
 * @param filename the log filename
 **/
void set_log_filename(std::string filename);

// create typical data///////////////////////////

/**
 * @brief create random vector
 * @param vec allocated vector
 * @param min min. of random
 * @param max min. of random
 * @note the ramdom number generator is random generator is mt19937
 * @note
 * - # of computation: N
 * - Multi-threading: false
 * - GPU acceleration: false
 **/
template <typename T>
void random_vector(vector<T> &vec, const T min, const T max) {
  // rand (0~1)
  std::random_device random;
  std::mt19937 mt(random());
  std::uniform_real_distribution<> rand(min, max);

  for (size_t i = 0; i < vec.size(); i++) {
    vec[i] = rand(mt);
  }
}

// create matrix //////////////////

/**
 * @brief create band matrix
 * @param M # of Row
 * @param N # of col.
 * @param W half-bandwidth (bandwidth is 2*W+1)
 * @param diag_val value of diagonal elements
 * @param val value of non-diagonal elements
 * @note
 * - # of computation: M*W
 * - Multi-threading: false
 * - GPU acceleration: false
 **/
template <typename T>
matrix::COO<T> band_matrix(const int M, const int N, const int W,
                           const T diag_val, const T val);

/**
 * @brief create random structure matrix (column number is decided by random)
 * @param M # of Row
 * @param N # of col.
 * @param nnzrow non-zero elements per row
 * @param val value of elements
 * @note
 * - # of computation: M*nnzrow
 * - Multi-threading: false
 * - GPU acceleration: false
 **/
template <typename T>
matrix::COO<T> random_structure_matrix(const int M, const int N,
                                       const int nnzrow, const T val);

/**
 * @brief create band matrix
 * @param M # of Row and col.
 * @note
 * - # of computation: M
 * - Multi-threading: false
 * - GPU acceleration: false
 **/
template <typename T> matrix::COO<T> eye(const int M);

/**
 * @brief create Frank matrix
 * @param M # of row and col
 * @note
 * - # of computation: M^2
 * - Multi-threading: false
 * - GPU acceleration: false
 **/
template <typename T> matrix::COO<T> frank_matrix(const int &M);

/**
 * @brief Nth eigenvalue from the bottom of MxM Frank matrix
 * @param M dimension of Frank matrix
 * @param N #-th eigenvalue from the bottom
 * @note
 * - # of computation: O(1)
 * - Multi-threading: false
 * - GPU acceleration: false
 **/
template <typename T> T frank_matrix_eigenvalue(const int &M, const int &N);

// send///////////////////

/**
 * @brief send data to GPU
 **/
template <typename T> auto send(T &x) { x.send(); }

/**
 * @brief send datas to GPU
 **/
template <typename T, typename... Types> auto send(T &x, Types &... args) {
  x.send();
  send(args...);
}

// recv///////////////////
/**
 * @brief recv. and free data from GPU
 **/
template <typename T> auto recv(T &x) { x.recv(); }

/**
 * @brief recv. and free datas to GPU
 **/
template <typename T, typename... Types> auto recv(T &x, Types &... args) {
  x.recv();
  recv(args...);
}

// device_free///////////////////

/**
 * @brief free data of GPU
 **/
template <typename T> auto device_free(T &x) { x.device_free(); }

/**
 * @brief free datas of GPU
 **/
template <typename T, typename... Types>
auto device_free(T &x, Types &... args) {
  x.device_free();
  device_free(args...);
}

/**
 * @brief get build option (true: with avx, false: without avx)
 **/
bool build_with_avx();

/**
 * @brief get build option (true: with avx2, false: without avx2)
 **/
bool build_with_avx2();

/**
 * @brief get build option (true: with avx512, false: without avx512)
 **/
bool build_with_avx512();

/**
 * @brief get build option (true: enable gpu, false: disable gpu)
 **/
bool build_with_gpu();

/**
 * @brief get build option (true: with intel mkl, false: without intel mkl)
 **/
bool build_with_mkl();

/**
 * @brief get build option (true: with lapack, false: without lapack (=with
 *intel mkl))
 **/
bool build_with_lapack();

/**
 * @brief get build option (true: with cblas, false: without cblas (=with intel
 *mkl))
 **/
bool build_with_cblas();

} // namespace util
} // namespace monolish
