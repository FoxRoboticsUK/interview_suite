#include <assert.h>

#include <iostream>

#include "largest_int_div_by_primes.hpp"

/* 

 * The largest integer ≤ 100 that is only divisible by both the 
 * primes 2 and 3 is 96, as 96=32*3=25*3. For two distinct primes
 * p and q let M(p,q,N) be the largest positive integer ≤N only
 * divisible by both p and q and M(p,q,N)=0 if such a positive
 * integer does not exist.
 * 
 * E.g. M(2,3,100)=96.
 * M(3,5,100)=75 and not 90 because 90 is divisible by 2 ,3 and 5.
 * Also M(2,73,100)=0 because there does not exist a positive
 * integer ≤ 100 that is divisible by both 2 and 73.
 * 
 * Let S(N) be the sum of all distinct M(p,q,N). S(100)=2262.
 * 
 * Find S(10 000 000).
 */

/* Edit this function to answer the question.
 * Build and run the executable to test your code.
 */
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
