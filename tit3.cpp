#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>
#include <cmath>

#include "utility.h"

using namespace std;

bool primeCheck(int p) {
    if (p<2) return false;

    // Really slow way to check, but works
    for(int d = 2; d<p; ++d) {
        if (0==p%d) return false; // found a divisor
    }
    return true; // no divisors found
}

int countPrimes(const int *a, int size) {
    int numberPrime = 0;
    for (int i = 0; i < size; ++i) {
        // For each element in the input array, check it,
        // and increment the count if it is prime.
        if(primeCheck(a[i]))
            ++numberPrime;
    }
    return numberPrime;
}

