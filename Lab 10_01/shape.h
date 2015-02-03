#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <fstream>
using namespace std;

enum Shape_Type {SQUARE, DIAMOND, PYRAMID, TRIANGLE};

class Shape{
	public:
		Shape_Type shape_type;
		int shape_size; 
		bool isFilled; 
		
		Shape();
		Shape(Shape_Type new_shapeType);	
		
		void defineSize();
		void defineFill();
		int getSize();
		void setSize(int newSize);
		void printFilledShape(ofstream& out_stream);
		void printHollowShape(ofstream& out_stream);  
		bool getIsFilled ();
};

class Square: public Shape{
	public:
 		Square(); // default constructor
 		void defineSize();
 		void printFilledShape( ofstream& out_stream );
 		void printHollowShape( ofstream& out_stream ); 
};

class Diamond: public Shape{
	public:
 		Diamond(); // default constructor
 		void defineSize();
 		void printFilledShape( ofstream& out_stream );
 		void printHollowShape( ofstream& out_stream ); 
};

class Pyramid: public Shape{
	public:
 		Pyramid(); // default constructor
 		void defineSize();
 		void printFilledShape( ofstream& out_stream );
 		void printHollowShape( ofstream& out_stream ); 
};

class Triangle: public Shape{
	public:
 		Triangle(); // default constructor
 		void defineSize();
 		void printFilledShape( ofstream& out_stream );
 		void printHollowShape( ofstream& out_stream ); 
};

#endif