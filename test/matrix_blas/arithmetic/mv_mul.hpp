#include "../../test_utils.hpp"

template <typename T>
void ans_mv_mul(monolish::matrix::Dense<T> &A, monolish::vector<T> &mx,
             monolish::vector<T> &my) {

  if (A.get_col() != mx.size()) {
    std::runtime_error("A.col != x.size");
  }
  if (A.get_row() != my.size()) {
    std::runtime_error("A.row != y.size");
  }

  T *x = mx.data();
  T *y = my.data();
  int M = A.get_row();
  int N = A.get_col();

  for (int i = 0; i < my.size(); i++)
    y[i] = 0;

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      y[i] += A.val[N * i + j] * x[j];
    }
  }
}

template <typename MAT, typename T>
bool test_send_mv_mul(const size_t M, const size_t N, double tol) {

  size_t nnzrow = 81;
  if (nnzrow < N) {
    nnzrow = 81;
  } else {
    nnzrow = N - 1;
  }

  monolish::matrix::COO<T> seedA =
      monolish::util::random_structure_matrix<T>(M, N, nnzrow, 1.0);

  MAT A(seedA); // M*N matrix

  monolish::vector<T> x(A.get_col(), 0.0, 1.0);
  monolish::vector<T> y(A.get_row(), 0.0, 1.0);

  monolish::vector<T> ansy(A.get_row());
  ansy = y;

  monolish::matrix::Dense<T> AA(seedA);
  ans_mv_mul(AA, x, ansy);

  monolish::util::send(A, x, y);
  y = A * x;
  y.recv();

  return ans_check<T>(__func__, A.type(), y.data(), ansy.data(), y.size(), tol);
}

template <typename MAT, typename T>
bool test_mv_mul(const size_t M, const size_t N, double tol) {

  size_t nnzrow = 81;
  if (nnzrow < N) {
    nnzrow = 81;
  } else {
    nnzrow = N - 1;
  }

  monolish::matrix::COO<T> seedA =
      monolish::util::random_structure_matrix<T>(M, N, nnzrow, 1.0);

  MAT A(seedA); // M*N matrix

  monolish::vector<T> x(A.get_col(), 0.0, 1.0);
  monolish::vector<T> y(A.get_row(), 0.0, 1.0);

  monolish::vector<T> ansy(A.get_row());
  ansy = y;

  monolish::matrix::Dense<T> AA(seedA);
  ans_mv_mul(AA, x, ansy);

  y = A * x;

  return ans_check<T>(__func__, A.type(), y.data(), ansy.data(), y.size(), tol);
}
