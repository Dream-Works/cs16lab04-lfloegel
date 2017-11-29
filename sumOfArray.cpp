// Author: Lara FS
//adds all the numbers in the array and returns sum

#include "arrayFuncs.h"

int sumOfArray(int a[], int size) {
  int sum;
  for (int i=0; i<size; i++) {
    sum += a[i];
  }
  return sum;
}
