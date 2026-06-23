#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool algorithm_all_of_less_than_10(int value) {
  return value < 10;
}

int algorithm_all_of_main() {
  vector<int> numbers = {1, 7, 3, 5, 9, 2};
  if (all_of(numbers.begin(), numbers.end(), algorithm_all_of_less_than_10)) {
    cout << ">>> Executed algorithm's 'all_of()' function\n";
  } else {
    cout << ">>> Executed algorithm's 'all_of()' function\n";
  }
  
  return 0;
}
