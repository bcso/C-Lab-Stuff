//*********************************************
// Student1 Name: Brian So
// Student1 Number: 20477254
//
// SYDE 121 Lab: 04 Assignment: 
//
// Filename: lab0402.cpp
// Date submitted: October 8, 2014
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
	unsigned int ans = 0;
	int input = -1;
	int temp = 0;
	while (input < 0){
		cout << "Input a number (greater or eq to zero): ";
		cin >> input;
	}

	if (input > 0){
		ans = 1;
	}
	for (int i = 1; i < input + 1 ; i++){
		ans = ans * i;
	}

	cout << "Factorial of " << input << " is " << ans << endl;
	
    system("PAUSE");
    return EXIT_SUCCESS;
}
