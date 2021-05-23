#include <vector>
#include "insertion_sort.hpp"

// файл с определениями

namespace itis {

  void insertion_sort(std::vector<int> array, int length) {
    int temp = 0;
    int item = 0;
    for (int counter = 1; counter < length; counter++){
      temp = array[counter];
      item = counter-1;
      while(item >= 0 && array[item] > temp){
        array[item + 1] = array[item];
        array[item] = temp;
        item--;
      }
    }
  }

}  // namespace itis