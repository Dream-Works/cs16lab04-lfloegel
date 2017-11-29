// utility.cpp
#include "utility.h"
#include <iostream>
#include <math.h>
#include <cmath>
// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    

// For example, if you need an isPrime function, you can put the function
// definition in this file.  Similarly, isOdd or isEven might be useful.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

bool isOdd(int x) { //determines if a number is odd 
  if ((x%2 == 1) || (x%2 == -1)) {
    return true;
  }

  else {
    return false;
  }
} //fix the negatives 

bool isEven(int x) { //determines if number is even
  if (x%2 == 0) {
    return true;
  }
  return false; 
}


bool isPrime(int x) { //determines if number is prime

  //int limit;
  //bool isPrime = true;

  //limit = int(ceil(sqrt(x))); //ceiling rounds x to the nearest number

  if (x < 2) {
    return false;
  }
  
  for (int i = 2; i <= (x/2); i++) {
    if (x%i == 0) { //if a number is able to be divided by any other number than 1, then its not prime and therefore it stops and says it is false 
      return false;
      break;
    }
  }

  return true; //else no number can divide it and its prime 

 }