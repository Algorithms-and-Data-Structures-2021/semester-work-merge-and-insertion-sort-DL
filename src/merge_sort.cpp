#include "merge_sort.h"

namespace itis {

  void merge_sort(std::vector<int> arr, int l, int r) {

    for (int m = 1; m <= r - l; m = 2 * m) {
      for (int i = l; i < r; i += 2 * m) {
        int from = i;
        int mid = i + m - 1;
        int to = min(i + 2 * m - 1, r);

        merge(arr, from, mid, to);
      }
    }
  }

  int min(int x, int y) {
    return (x < y) ? x : y;
  }

  void merge(std::vector<int> arr, int start, int mid, int end) {
    int start2 = mid + 1;

    if (arr[mid] <= arr[start2]) {
      return;
    }

    while (start <= mid && start2 <= end) {
      if (arr[start] <= arr[start2]) {
        start++;
      }
      else {
        int value = arr[start2];
        int index = start2;
        while (index != start) {
          arr[index] = arr[index - 1];
          index--;
        }
        arr[start] = value;

        start++;
        mid++;
        start2++;
      }
    }

  }  // namespace itis
}