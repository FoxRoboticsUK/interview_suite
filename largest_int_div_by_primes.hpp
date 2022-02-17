#ifndef LARGEST_INT_DIV_BY_PRIMES_HPP_
#define LARGEST_INT_DIV_BY_PRIMES_HPP_

#include <assert.h>

#include <vector>

class LargestIntDivByPrimesTester {
 public:
  LargestIntDivByPrimesTester(const unsigned long& size);

  inline unsigned long long getSum() const { return sum_; }

 private:
  bool isPrime(const unsigned long& x);
  void fillSieve(const unsigned long& size);
  void findPrimes();

  std::vector<unsigned long> primes_;
  std::vector<bool> sieve_;
  unsigned long long sum_;
};

#endif