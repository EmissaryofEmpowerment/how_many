#include <iostream>
#include <array>
#include "carton.h"
#include "how_many.h"

using namespace std;

int main() {

    array<int, kMaxSize> integers{1, 2, 2, 2, 4, 5, 6, 7, 8, 9, 23, 24, 25, 26, 27};
    int valueToCompare;
    int frequency = HowMany(valueToCompare,integers, integers.size());
   cout << to_string(valueToCompare) << " is found " << to_string(frequency) << " times in this array."  <<endl;
  return 0;
}