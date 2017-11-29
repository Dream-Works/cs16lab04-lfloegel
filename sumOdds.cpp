// Author: Lara FS
//adds all of the odd numbers in the array and returns sums

#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int sumOdds(int a[], int size) {
  
  int oddSum = 0;

  for (int i = 0; i < size; i++) {
  	if ((a[i]%2 == 1) || (a[i]%2 == -1)) {
  		oddSum += a[i];
  	}
  }

  return oddSum;
}
