#include <fstream>
#include <iostream>
#include "matrixmath.h"
using namespace std;


//Calcualte the matrix result
void calculateMatrix(int matrix1[][100], int matrix2[][100], int matrixSize[], int resultMatrix[][100]){

	//Declare the row sizes
	int rowSize1 = matrixSize[0]; // i
	int colSize1 = matrixSize[1]; // j
	int rowSize2 = matrixSize[2]; // m
	int colSize2 = matrixSize[3]; // n	

	int thisElementTemp = 0;

	for (int i = 0; i < rowSize1; i++){
		for (int n = 0; n < colSize2; n++){
			for (int j = 0; j < colSize1; j++){
				thisElementTemp += matrix1[i][j] * matrix2[j][n];
				resultMatrix[i][n] = thisElementTemp;
			}
			thisElementTemp = 0;
		}
		
	}
}


void write_file(int matrixSize[], int resultMatrix[][100]){
	//Write to a file
	char out_file_name[20];
	ofstream out_stream;
	cout << "Enter the output file name (maximum of 20 characters): ";
	cin >> out_file_name;

	out_stream.open(out_file_name);

	int rowSize1 = matrixSize[0]; // i
	int colSize1 = matrixSize[1]; // j
	int rowSize2 = matrixSize[2]; // m
	int colSize2 = matrixSize[3]; // n		

	for (int i = 0; i < rowSize1; i++){
		for (int n = 0; n < colSize2; n++){
			out_stream << resultMatrix[i][n] << " ";
		}
		out_stream << endl;
	}

	cout << "Output writen to file." << endl;
	out_stream.close();
}

void read_file(matrix_struct matrix[]) { 
	char in_file_name[20];
	ifstream in_stream; 
	cout << "Enter the input file name (maximum of 20 characters): "; 
	cin >> in_file_name;

	
	in_stream.open(in_file_name);
	
	if (in_stream.fail())
	{
		cout << "Input file opening failed. \n";
		exit(1);
	}
	
		for (int i = 0; i <= 1; i++){
			in_stream >> matrix[i].row;
			in_stream >> matrix[i].column;
			
			for (int j = 0; j < matrix[i].row; j++){
				
				for (int k = 0; k < matrix[i].column; k++){
					in_stream>> matrix[i].matrix[j][k];
				}
			}
		}
			
			if (valid_check(matrix)==false)
				{
					cout << "Invalid matrix multiplication, please make sure your input is valid." <<endl; 
					exit(1);				
				}
	echoe_input(matrix);
	
	
	in_stream.close();
}

bool valid_check (matrix_struct matrix[]){
	if (matrix[0].column == matrix[1].row){
		return true;
	} else {
		return false; 
	}
}

void echoe_input (matrix_struct matrix[]){
	for (int i = 0; i <= 1; i++){
			cout<< matrix[i].row << " " << matrix[i].column <<endl;
			for (int j = 0; j < matrix[i].row; j++){
				for (int k = 0; k < matrix[i].column; k++){
					cout<< matrix[i].matrix[j][k] <<" " ;
				}
				cout <<endl; 
			}
		}
}