#include <iostream>
#include <fstream>
using namespace std;
#include "shape.h"

int main(int argc, char const *argv[])
{
    // Shape object declarations
    Square my_square;
    Diamond my_diamond;
    Pyramid my_pyramid;
    Triangle my_triangle;

	my_square.defineSize();
	my_square.defineFill();

	bool squareFill = my_square.getIsFilled();
	int squareSize = my_square.getSize();

	cout << "my_square is of size " << squareSize << " and has fill of " << squareFill <<endl;


	my_diamond.defineSize();
	my_diamond.defineFill();

	bool diamondFill = my_diamond.getIsFilled();
	int diamondSize = my_diamond.getSize();

	cout << "my_diamond is of size " << diamondSize << " and has fill of " << diamondFill <<endl;

	my_pyramid.defineSize();
	my_pyramid.defineFill();

	bool pyramidFill = my_pyramid.getIsFilled();
	int pyramidSize = my_pyramid.getSize();

	cout << "my_pyramid is of size " << pyramidSize << " and has fill of " << pyramidFill <<endl;


	my_triangle.defineSize();
	my_triangle.defineFill();

	bool triangleFill = my_triangle.getIsFilled();
	int triangleSize = my_triangle.getSize();

	cout << "my_triangle is of size " << triangleSize << " and has fill of " << triangleFill <<endl;
	
	return 0;
}