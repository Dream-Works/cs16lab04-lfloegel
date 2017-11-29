// Author: Lara FS
//counts the number of evens in an array

#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int countEvens(int a[], int size) {

    int evenCount = 0; 

    for (int i = 0; i < size; i++) {
    	if (((a[i]))%2 == 0){
			evenCount++;
		}
    }

    return evenCount;
}

//SUCK IT SCIENCE 

