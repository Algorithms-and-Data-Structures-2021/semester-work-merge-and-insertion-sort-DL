#include <fstream>
#include <iostream>
#include <string>       // string
#include <string_view>  // string_view
#include <chrono>       // high_resolution_clock, duration_cast, nanoseconds
#include <vector>
#include <sstream>
#include "merge_sort.h"

// подключаем вашу структуру данных

using namespace std;
using namespace itis;

// абсолютный путь до набора данных и папки проекта
static constexpr auto kDatasetPath = string_view{PROJECT_DATASET_DIR_MERGE_SORT};
static constexpr auto kProjectPath = string_view{PROJECT_SOURCE_DIR};

int main() {

  // Tip 1: входные аргументы позволяют более гибко контролировать параметры вашей программы
  const auto path = string(kDatasetPath);
  const auto output_path = string(kProjectPath) + "/benchmark/results/merge_sort_result.csv";

  auto output_file1 = ofstream(output_path);
  output_file1.close();
  // работа с набором данных
  vector<string> folders = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10"};
  vector<string> files = {"100", "500", "1000", "5000", "10000", "50000", "100000", "500000", "1000000"};
  vector<int> main_array;
  for (const string& file : files) {  // Проходим по всем 10 .csv файлам
    for (string folder : folders) {   // Проходим по всем 10 папкам
      for (int i = 1; i < 11; i++) {  // Запускаем замерку времени 10 раз
        auto input_file = ifstream(path + "/" + folder + "/" + file + ".csv");
        auto time_diff_selection_sort = chrono::nanoseconds::zero();
        cout << (path + "/" + folder + "/" + file) << endl;

        if (input_file) {
          for (string line; getline(input_file, line, ','); /* ... */) {
            auto ss = stringstream(line);
            main_array.push_back(stoi(line));
          }
          int n = main_array.size();
          const auto time_point_before_merge_sort = chrono::steady_clock::now();
          merge_sort(main_array,0,n);
          const auto time_point_after_merge_sort = chrono::steady_clock::now();
          time_diff_selection_sort += time_point_after_merge_sort - time_point_before_merge_sort;
          main_array.clear();
        }

        input_file.close();
        const auto time_elapsed_ns_merge_sort =
            chrono::duration_cast<chrono::nanoseconds>(time_diff_selection_sort).count();
        cout << time_elapsed_ns_merge_sort << endl;

        //Открываем файл для записи и вносим полученые данные
        auto output_file = fstream(output_path, ios::app);
        output_file << folder << "," << file << "," << i << "," << time_elapsed_ns_merge_sort << endl;
        output_file.close();
      }
    }
  }
  return 0;
}