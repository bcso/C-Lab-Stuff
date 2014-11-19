#include <fstream>
#include <iostream>
using namespace std;

//Check if matrices conform to matrix multiplication rules
bool checkMatrices(int matrix1[], int matrix2[]);

//Carry out the matrix calculation
void calculateMatrix(int matrix1[][100], int matrix2[][100], int matrixSize[], int resultMatrix[][100]);

//structures for matrices 
struct matrix_struct{
	int row; 
	int column; 
	int matrix[100][100];
};

void read_file(matrix_struct matrix[]);

bool valid_check (matrix_struct matrix[]);

void echoe_input (matrix_struct matrix[]);