// Author: Lara FS
//counts the number of odds in an array

#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>
#include <cmath>

#include "utility.h"

using namespace std;

int countPrimes(int a[], int size) {

	int primeCount = 0;

	for (int i = 0; i <= size; i++) {
		if (a[i] < 2) {
			return false; 
		
		}

		else { 
			for (int n = 2; n <= (a[i]/2); n++) {
				if (a[i]%n == 0) {
					return false;
					
				}

				else {
					primeCount++;
				}
			}
		}
	}


	return primeCount;

}
