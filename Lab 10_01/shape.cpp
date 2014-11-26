	#include "shape.h"
#include <iostream>
using namespace std;

Shape::Shape(){
	shape_type = SQUARE;
}

Shape::Shape(Shape_Type new_shapeType){
	shape_type = new_shapeType;
}

void Shape::defineSize(){
	do {
		cout << "Enter the size of the shape, between 1 and 20: ";
		cin >> shape_size;
		cout << endl; 
	} while (shape_size<=1 || shape_size>=20);	 
}

void Shape::defineFill(){
	int userInput;
	bool correctInput = false;
	do{
		cout << "Enter 0 for hollow, enter 1 for solid fill: ";
		cin >> userInput;
		if (userInput == 0){
			isFilled = false;
			correctInput = true;
		} else if (userInput == 1){
			isFilled = true;
			correctInput = true;
		} else {
			correctInput = false;
		}
		cout << endl;
	} while (correctInput == false);
}

int Shape::getSize(){
	return shape_size;
}

void Shape::setSize(int new_size){
	shape_size = new_size; 		
}

void Shape::printFilledShape(ofstream& out_stream){
	/*Print me*/
}

void Shape::printHollowShape(ofstream& out_stream){
	/*Print me*/	
}

bool Shape::getIsFilled(){
	return isFilled;
}

/*
	Define Square member class functions here
*/

Square::Square(){
	shape_type = SQUARE;
}

void Square::defineSize(){
	shape_size = 0;
	do {
		cout << "Enter the size of the square, between 1 and 20: ";
		cin >> shape_size;
	} while (shape_size<=1 || shape_size>=20);	
	
	cout << "The size of the square is: " << shape_size << endl;
}

void Square::printFilledShape(ofstream& out_stream){
	
}

void Square::printHollowShape(ofstream& out_stream){
	
}

/*
	Define Square member class functions here
*/

Diamond::Diamond(){
	shape_type = DIAMOND;
}

void Diamond::defineSize(){
	shape_size = 0;
	bool pass = false;
	do {
		cout << "Enter the size of the Diamond, odd number between 1 and 20: ";
		cin >> shape_size;
		if (shape_size%2 == 0){
			pass = false;
		} else {
			if ((shape_size <=1) || (shape_size >=20)){
				pass = false;
			} else {
				pass = true;
			}
		}
	} while (pass == false);	
	
	cout << "The size of the Diamond is: " << shape_size << endl;
}

void Diamond::printFilledShape(ofstream& out_stream){
	
}

void Diamond::printHollowShape(ofstream& out_stream){
	
}

/*
	Define Pyramid member class functions here
*/

Pyramid::Pyramid(){
	shape_type = PYRAMID;
}

void Pyramid::defineSize(){
	shape_size = 0;
	do {
		cout << "Enter the size of the Pyramid, between 1 and 20: ";
		cin >> shape_size;
	} while (shape_size<=1 || shape_size>=20);	
	
	cout << "The size of the Pyramid is: " << shape_size << endl;
}

void Pyramid::printFilledShape(ofstream& out_stream){
	
}

void Pyramid::printHollowShape(ofstream& out_stream){
	
}

/*
	Define Triangle member class functions here
*/

Triangle::Triangle(){
	shape_type = TRIANGLE;
}

void Triangle::defineSize(){
	shape_size = 0;
	do {
		cout << "Enter the size of the Triangle, between 1 and 20: ";
		cin >> shape_size;
	} while (shape_size<=1 || shape_size>=20);	
	
	cout << "The size of the Triangle is: " << shape_size << endl;
}

void Triangle::printFilledShape(ofstream& out_stream){
	
}

void Triangle::printHollowShape(ofstream& out_stream){

}

