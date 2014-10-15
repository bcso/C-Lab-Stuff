//*********************************************
// Student1 Name: Brian So
// Student1 Number: 20477254
//
// SYDE 121 Lab: 04 Assignment: 
//
// Filename: lab040.cpp
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
#include <stdlib.h> 

using namespace std;

//Get random number
int genRand(){
	return (rand()%10);
}

//get answer
int getAnswer(int a, int b){
	return a* b;
}

int main(int argc, char *argv[])
{

	//Declare vars
	int a = 0;
	int b = 0;
	int ans = -2;
	int resp = 0;
	int qTotal = 0;
	int qWrong = 0;
	int qFirstRight = 0;
	bool esc = false;

	while (esc == false){
		//Count the total number of questions
		qTotal++;
		//Reset the answered wrong variable
		qWrong = 0;

		a = genRand();
		b = genRand();
		ans = getAnswer(a,b);
		while ((resp != ans)){

			cout <<endl << "What is " << a << " times " << b << "?"
			 << " Input -1 to escape." << endl;
			cin >> resp;
			if (resp == ans){
				//Only give credit if this question was never answered wrong
				if (qWrong == 0){
					qFirstRight++;
				}
				cout << "Correct!" <<endl;
			} else if ((resp != ans) && (resp != -1)){
				//Dirty the qWrong, this question has been answered wrong
				qWrong++;
				cout <<endl<< "You have entered: " << resp << " Try again." << endl;
			} if (resp == -1){
				//Let them break free, no penalty
				resp = ans;

				//This question doesn't count only if -1 is the first input i.e. they never got this wrong
				if (qWrong == 0){
					qTotal --;	
				}

				//Switch on esc 
				esc = true;
			}
		}
	}

	cout << endl << "You got " << qFirstRight << " out of " << qTotal << " right on the first try. " << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

