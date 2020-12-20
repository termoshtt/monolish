#include "../../test_utils.hpp"

template <typename T> void ans_vfloor(monolish::vector<T> &ans) {
  for (size_t i = 0; i < ans.size(); i++) {
    ans[i] = std::floor(ans[i]);
  }
}

template <typename T> bool test_send_vfloor(const size_t size, double tol) {

  monolish::vector<T> ans(size, 0.1, 10.0);

  monolish::vector<T> ans_tmp;
  ans_tmp = ans.copy();
  ans_vfloor(ans_tmp);

  monolish::util::send(ans);
  monolish::vml::floor(ans, ans);
  ans.recv();

  return ans_check<T>(__func__, ans.data(), ans_tmp.data(), ans.size(), tol);
}

template <typename T> bool test_vfloor(const size_t size, double tol) {

  monolish::vector<T> ans(size, 0.1, 10.0);

  monolish::vector<T> ans_tmp;
  ans_tmp = ans.copy();
  ans_vfloor(ans_tmp);

  monolish::vml::floor(ans, ans);

  return ans_check<T>(__func__, ans.data(), ans_tmp.data(), ans.size(), tol);
}