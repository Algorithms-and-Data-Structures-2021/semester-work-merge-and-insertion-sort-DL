#include <fstream>      // ifstream, ofstream
#include <iostream>     // cout
#include <string>       // string, getline
#include <string_view>  // string_view
#include <random>       // mt19937_64, random_device
#include <chrono>       // system_clock

using namespace std;

// абсолютный путь до набора данных
static constexpr auto kDatasetPathInsertionSort = string_view{PROJECT_DATASET_DIR_INSERTION_SORT};
static constexpr auto kDatasetPathMergeSort = string_view{PROJECT_DATASET_DIR_MERGE_SORT};

int main() {
  const auto pathToMergeSort = string(kDatasetPathMergeSort);
  const auto pathToInsertionSort = string(kDatasetPathInsertionSort);
  cout << "Dataset path To Data Insertion Sort: " << pathToInsertionSort << endl;
  cout << "Dataset path To Data Merge Sort: " << pathToMergeSort << endl;

  vector<string> output_streams;
  output_streams.emplace_back("/100.csv");
  output_streams.emplace_back("/500.csv");
  output_streams.emplace_back("/1000.csv");
  output_streams.emplace_back("/5000.csv");
  output_streams.emplace_back("/10000.csv");
  output_streams.emplace_back("/50000.csv");
  output_streams.emplace_back("/100000.csv");
  output_streams.emplace_back("/500000.csv");
  output_streams.emplace_back("/1000000.csv");


  vector<int> integers = {100, 500, 1000, 5000, 10000, 50000, 100000, 500000, 1000000};

  while (!integers.empty()) {
    auto outputStreamMergeSort01 = ofstream(pathToMergeSort + "/01" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamMergeSort02 = ofstream(pathToMergeSort + "/02" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamMergeSort03 = ofstream(pathToMergeSort + "/03" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamMergeSort04 = ofstream(pathToMergeSort + "/04" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamMergeSort05 = ofstream(pathToMergeSort + "/05" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamMergeSort06 = ofstream(pathToMergeSort + "/06" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamMergeSort07 = ofstream(pathToMergeSort + "/07" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamMergeSort08 = ofstream(pathToMergeSort + "/08" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamMergeSort09 = ofstream(pathToMergeSort + "/09" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamMergeSort10 = ofstream(pathToMergeSort + "/10" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamInsertionSort01 = ofstream(pathToInsertionSort + "/01" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamInsertionSort02 = ofstream(pathToInsertionSort + "/02" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamInsertionSort03 = ofstream(pathToInsertionSort + "/03" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamInsertionSort04 = ofstream(pathToInsertionSort + "/04" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamInsertionSort05 = ofstream(pathToInsertionSort + "/05" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamInsertionSort06 = ofstream(pathToInsertionSort + "/06" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamInsertionSort07 = ofstream(pathToInsertionSort + "/07" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamInsertionSort08 = ofstream(pathToInsertionSort + "/08" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamInsertionSort09 = ofstream(pathToInsertionSort + "/09" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamInsertionSort10 = ofstream(pathToInsertionSort + "/10" + output_streams.front(), ios::ios_base::trunc);

    const auto seed = chrono::system_clock::now().time_since_epoch().count();
    auto engine = mt19937(seed);  // без seed`а генератор будет выдавать одни и те же значения
    auto dist = uniform_int_distribution(0, 10000000);  // равновероятное распределение генерируемых чисел

    if (outputStreamMergeSort01) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamMergeSort01 << dist(engine) << ',';
      }
      outputStreamMergeSort01 << dist(engine) << '\n';
    }

    if (outputStreamMergeSort02) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamMergeSort02 << dist(engine) << ',';
      }
      outputStreamMergeSort02 << dist(engine) << '\n';
    }

    if (outputStreamMergeSort03) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamMergeSort03 << dist(engine) << ',';
      }
      outputStreamMergeSort03 << dist(engine) << '\n';
    }

    if (outputStreamMergeSort04) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamMergeSort04 << dist(engine) << ',';
      }
      outputStreamMergeSort04 << dist(engine) << '\n';
    }

    if (outputStreamMergeSort05) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamMergeSort05 << dist(engine) << ',';
      }
      outputStreamMergeSort05 << dist(engine) << '\n';
    }

    if (outputStreamMergeSort06) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamMergeSort06 << dist(engine) << ',';
      }
      outputStreamMergeSort06 << dist(engine) << '\n';
    }

    if (outputStreamMergeSort07) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamMergeSort07 << dist(engine) << ',';
      }
      outputStreamMergeSort07 << dist(engine) << '\n';
    }

    if (outputStreamMergeSort08) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamMergeSort08 << dist(engine) << ',';
      }
      outputStreamMergeSort08 << dist(engine) << '\n';
    }

    if (outputStreamMergeSort09) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamMergeSort09 << dist(engine) << ',';
      }
      outputStreamMergeSort09 << dist(engine) << '\n';
    }

    if (outputStreamMergeSort10) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamMergeSort10 << dist(engine) << ',';
      }
      outputStreamMergeSort10 << dist(engine) << '\n';
    }

    if (outputStreamInsertionSort01) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamInsertionSort01 << dist(engine) << ',';
      }
      outputStreamInsertionSort01 << dist(engine) << '\n';
    }

    if (outputStreamInsertionSort02) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamInsertionSort02 << dist(engine) << ',';
      }
      outputStreamInsertionSort02 << dist(engine) << '\n';
    }

    if (outputStreamInsertionSort03) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamInsertionSort03 << dist(engine) << ',';
      }
      outputStreamInsertionSort03 << dist(engine) << '\n';
    }

    if (outputStreamInsertionSort04) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamInsertionSort04 << dist(engine) << ',';
      }
      outputStreamInsertionSort04 << dist(engine) << '\n';
    }

    if (outputStreamInsertionSort05) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamInsertionSort05 << dist(engine) << ',';
      }
      outputStreamInsertionSort05 << dist(engine) << '\n';
    }

    if (outputStreamInsertionSort06) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamInsertionSort06 << dist(engine) << ',';
      }
      outputStreamInsertionSort06 << dist(engine) << '\n';
    }

    if (outputStreamInsertionSort07) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamInsertionSort07 << dist(engine) << ',';
      }
      outputStreamInsertionSort07 << dist(engine) << '\n';
    }

    if (outputStreamInsertionSort08) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamInsertionSort08 << dist(engine) << ',';
      }
      outputStreamInsertionSort08 << dist(engine) << '\n';
    }

    if (outputStreamInsertionSort09) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamInsertionSort09 << dist(engine) << ',';
      }
      outputStreamInsertionSort09 << dist(engine) << '\n';
    }

    if (outputStreamInsertionSort10) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamInsertionSort10 << dist(engine) << ',';
      }
      outputStreamInsertionSort10 << dist(engine) << '\n';
    }

    integers.erase(integers.begin());
    output_streams.erase(output_streams.begin());
  }

  return 0;
}