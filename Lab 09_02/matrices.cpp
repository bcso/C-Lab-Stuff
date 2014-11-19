//********************************************* 
// Student1 Name: Brian So	
// Student1 Number: 20477254
// 
// Student2 Name: Wayne Wu
// Student2 Number: 20563585
// 
// SYDE 121 Lab: 09 Assignment: 02
// 
// Filename: matrices.cpp
// Date submitted: 19/11/14
// 
// We hereby declare that this code, submitted 
// for credit for the course SYDE121, is a product 
// of our own efforts. This coded solution has 
// not been plagiarized from other sources and 
// as not been knowingly plagiarized by others. 
// 
// Pair Programming Work Declaration: 
// Wayne Wu Completed 50% of the assignment. 
// Brian So Completed 50% of the assignment. 
// 
//*********************************************

#include <fstream>
#include <iostream>
#include "matrixmath.h"
using namespace std;

//Initialize the matrix array struct
matrix_struct matrix[2];	

int main(int argc, char const *argv[])
{

	//Readin the file to the matrix array of structs
	read_file(matrix);

	//Grab the matrix sizes from the struct
	int matrixSize[4]= 
		{matrix[0].row, 
		 matrix[0].column, 
		 matrix[1].row, 
		 matrix[1].column};

	//Initialize the answer array
	int resultMatrix[100][100];

	//Perform the calculations
	calculateMatrix(matrix[0].matrix, matrix[1].matrix, matrixSize, resultMatrix);

	//Write the answer matrix to a file
	write_file(matrixSize, resultMatrix);

	return 0;
}