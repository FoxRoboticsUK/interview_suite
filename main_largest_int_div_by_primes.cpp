#include <assert.h>

#include <iostream>

#include "largest_int_div_by_primes.hpp"

// Edit this function
unsigned long calculateSum(const unsigned long& limit) { return 0; }

void runTest(const unsigned long& limit) {
  LargestIntDivByPrimesTester div_test{limit};
  auto true_num = div_test.getSum();
  auto test_num = calculateSum(limit);
  assert((true_num == test_num) && "Sums not equal");
}

int main(int argc, char** argv) {
  std::vector<unsigned long> test_nums{100,    5235, 10000000, 72349,
                                       128980, 12,   4};
  for (auto t : test_nums) {
    std::cout << "Running test for " << t << std::endl;
    runTest(t);
  }
  std::cout << "All tests passed!" << std::endl;

  return 0;
}