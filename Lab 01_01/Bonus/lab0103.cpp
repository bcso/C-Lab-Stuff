//********************************************* 
// Student1 Name: Jonathan Wen 
// Student1 Number: 20515413
// 
// Student2 Name: Brian So
// Student2 Number: 20477254
// 
// SYDE 121 Lab: 1 Assignment: 3
// 
// Filename: Lab0103.cpp
// Date submitted: Sep 17, 2014
// 
// We hereby declare that this code, submitted 
// for credit for the course SYDE121, is a product 
// of our own efforts. This coded solution has 
// not been plagiarized from other sources and 
// as not been knowingly plagiarized by others. 
// 
// Pair Programming Work Declaration: 
// Student1 Jonathan Wen Completed ~50% of the assignment. 
// Student2 Brian So Completed ~50% of the assignment. 
// 
//********************************************* 


#include <iostream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int rootCheck(int possibleSquareNum, int possibleRootNum)
{
	if (possibleSquareNum*possibleSquareNum==possibleRootNum)
	{
		//If it is true....
		cout << possibleSquareNum << " is the square root of " << possibleRootNum << endl;
	}
	else {
		//It isnt true...
		cout << possibleSquareNum << " is not the square root of " << possibleRootNum << endl;
	}
	return 0;
}

int squareCheck(int possibleSquareNum, int possibleRootNum)
{
	if (possibleRootNum*possibleRootNum==possibleSquareNum)
	{
		cout << possibleRootNum << " is the square of " << possibleSquareNum << endl;
	}
	else {
		cout << possibleRootNum << " is not the square of " << possibleSquareNum << endl;
	}
	return 0;
}

int main() {
	
	int i=0;
	int firstNum;
	int secondNum;
	
	for (int i=3; i<10; i++)
	{
		cout << "i = " << i 
 		<< " squared = " 
 		<< i * i 
		<< endl; 
	}
	cout << "\nA program by: Jonathan Wen and Brian So!\n"; 
	
	cout <<"Input first number...: ";
	cin >> firstNum;
	cout <<"Input second number...: ";
	cin >> secondNum;
	
	rootCheck(firstNum, secondNum);
	
	squareCheck(firstNum, secondNum);
	
 	system("pause"); 
 
 	return 0; 
 	
}


