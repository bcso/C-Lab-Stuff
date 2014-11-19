//********************************************* 
// Student1 Name: Brian So	
// Student1 Number: 20477254
// 
// Student2 Name: Wayne Wu
// Student2 Number: 20563585
// 
// SYDE 121 Lab: 09 Assignment: 02
// 
// Filename: matrixmath.h
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
using namespace std;

//Check if matrices conform to matrix multiplication rules
bool checkMatrices(int matrix1[], int matrix2[]);

//Carry out the matrix calculation
void calculateMatrix(int matrix1[][100], int matrix2[][100], int matrixSize[], int resultMatrix[][100]);

//structure for matrices 
struct matrix_struct{
	int row; 
	int column; 
	int matrix[100][100];
};

void read_file(matrix_struct matrix[]);

void write_file(int matrixSize[], int resultMatrix[][100]);

bool valid_check (matrix_struct matrix[]);

void echoe_input (matrix_struct matrix[]);