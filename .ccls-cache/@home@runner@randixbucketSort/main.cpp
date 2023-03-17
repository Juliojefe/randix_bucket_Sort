#include <iostream>
#include <string>
#include <vector>

void rbSort(std::vector<std::string> &A, int n, int d, int k);

int main() {
  std::vector<std::string> A;
  std::string in;
  while (getline(std::cin, in)) {
    A.push_back(in);
  }
  rbSort(A, A.size(), 9, 10);
  for (int i = 0; i < A.size(); ++i) {
    std::cout << A[i] << '\n';
  }
}

void rbSort(std::vector<std::string> &A, int n, int d, int k) {
  std::vector<std::vector<std::string>> B(k);
  for (int i = d - 1; i >= 0; --i) {
    for (int j = 0; j < n; ++j) {
      char index = A[j][i];
      B[static_cast<int>(index) - 48].push_back(A[j]);
    }
    int pos = 0;
    for (int j = 0; j < k; ++j) {
      std::vector<std::string> temp = B[j];
      for (int x = 0; x < temp.size(); ++x) {
        A[pos] = B[j][x];
        ++pos;
      }
      B[j].clear();
    }
  }
}