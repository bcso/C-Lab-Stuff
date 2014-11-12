#include "sumtwonums.h"
#include <iostream>
#include <cmath>

void displayInput(int* input, int size){

	if (size < 18){
		cout << "Integer size: " << size << endl;
		cout << "You have inputted: ";
		for (int i = 0; i  < size ; i++){
			cout << input[i];
		}
		cout <<endl;
	} else {
		cout << "Integer Overflow!" << endl;
	}
}