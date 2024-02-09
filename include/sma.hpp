#pragma once

#include <numeric>
#include <vector>

template <typename T = double>
std::vector<T> SMA(const std::vector<T> &p, int k) {
  if (k < 1)
    return {};
  int n = p.size();
  if (n < k)
    return {};

  T sum = std::accumulate(p.begin(), p.begin() + k, 0);
  std::vector<T> ans = {sum / (T)k};

  for (int i = k; i < n; ++i) {
    ans.push_back(ans.back() + (p[i] - p[i - k]) / (T)k);
  }

  return ans;
}
