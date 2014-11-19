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