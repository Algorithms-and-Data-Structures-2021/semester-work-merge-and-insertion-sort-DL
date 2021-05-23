#pragma once
#include <vector>
using namespace std;
namespace itis {
  int min(int x, int y);
  void merge(std::vector<int> arr, int start, int mid, int end);
  void merge_sort(std::vector<int> arr, int l, int r);

}  // namespace itis