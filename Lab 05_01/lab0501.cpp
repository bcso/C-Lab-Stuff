//*********************************************
// Student1 Name: Brian So
// Student1 Number: 20477254
//
// SYDE 121 Lab: 05 Assignment: 
//
// Filename: lab0501.cpp
// Date submitted: October 15, 2014
//
// We hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of our own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
// Pair Programming Work Declaration:
// Student1 Brian So Completed 100% of the assignment.
//
//*********************************************


#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int size = 0;
	int whiteSpace = 0;
	int mid = 0;

	while((size%2)==0 || (size <3) || (size>19)){
		cout << "Input your size (odd, 3-19): ";
		cin >> size;
	}

	whiteSpace = (size - 1)/2;
	mid = (size + 1)/2;


	//Go through all rows
	for (int i = 0; i < size; i++){
		//Draw Spaces
		for (int j = 0 ; j < (whiteSpace - i) ; j ++){
			cout <<" ";
		}

		//Draw stars
		for (int j = 0 ; j < (i*2 +1); j++){
			cout <<"*";			
		}
		cout << endl;

		//Draw mid + bottom half now only if size is > 1
		if ((i == whiteSpace) && (size > 1)){

			//draw bottom half			
			for (int i = 0; i < whiteSpace; i++){
				//draw rest of lines

				//Draw spaces
				for (int j = 0; j < (i+1); j++){
					cout <<" ";
				}

				//Draw stars
				for (int j = 0; j < (size - (2 + i*2)); j++){
					cout << "*";
				}

				cout << endl;
			}
			break;
		}
	}
    system("PAUSE");
    return EXIT_SUCCESS;
}
