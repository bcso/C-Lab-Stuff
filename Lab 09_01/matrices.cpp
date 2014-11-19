#include <fstream>
#include <iostream>
#include "matrixmath.h"
using namespace std;

matrix_struct matrix[2];

void read_file(matrix_struct matrix[]);
bool valid_check (matrix_struct matrix[]);
void echoe_input (matrix_struct matrix[]);	

int main(int argc, char const *argv[])
{

	read_file(matrix);

	int matrixSize[4]= 
		{matrix[0].row, 
		 matrix[0].column, 
		 matrix[1].row, 
		 matrix[1].column};

	int rowSizeAns = 100;
	int colSizeAns = 100;

	int resultMatrix[100][100]; //Declare the answer array

	calculateMatrix(matrix[0].matrix, matrix[1].matrix, matrixSize, resultMatrix);


	return 0;
}