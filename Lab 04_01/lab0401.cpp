//*********************************************
// Student1 Name: Brian So
// Student1 Number: 20477254
//
// SYDE 121 Lab: 04 Assignment: 
//
// Filename: lab0401.cpp
// Date submitted: October 8, 2014
//
// We hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of our own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
// Pair Programming Work Declaration:
// Student1 Brian So Completed 100% of the assignment.
//
//*********************************************

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	//Initialize variables
	int u1x = 0;
	int u1y = 0;
	int u2x = 0;
	int u2y = 0;

	int v1x = 0;
	int v1y = 0;
	int v2x = 0;
	int v2y = 0;

	int ux = 0;
	int uy = 0;
	int vx = 0;
	int vy = 0;

	int rx = 0;
	int ry = 0;
	int r = 0;
	int select = 0;	


	//User inputs cooordintes of start and end points
	cout << "2-Dimenstional Vector Operations" << endl  
		<<"Vector u has two components U1 and U2."  << endl
		<< "Vector v has two components V1 and V2" << endl;

	cout << endl << "Please enter the components for u: " << endl
		<< "First enter U1 as two integers: ";

	cin >> u1x >> u1y;

	cout << endl << "Now enter U2 as two integers: ";

	cin >> u2x >> u2y;

	cout << endl << "Please enter the components for v: " << endl
		<< "First enter V1 as two integers: ";

	cin >> v1x >> v1y;

	cout << endl << "Now enter V2 as two integers: ";

	cin >> v2x >> v2y;


	cout << endl << "You have entered: " << endl;
	
	cout << "U1: (" << u1x << ", " << u1y << ")" << endl;
	cout << "U2: (" << u2x << ", " << u2y << ")" << endl;
	cout << "V1: (" << v1x << ", " << v1y << ")" << endl;
	cout << "V2: (" << v2x << ", " << v2y << ")" << endl;

	//Calculate the i and j components of each vector from the coordinates
	ux = u2x - u1x;
	uy = u2y - u1y;
	vx = v2x - v1x;
	vy = v2y - v1y;

	// Create user menu and loop until exit
	while (select == 0){
		cout << endl<< "The vectors u and v are: " <<endl
		<< "u = " << ux << "*i + " << uy << "*j" << endl
		<< "v = " << vx << "*i + " << vy << "*j" << endl;

		cout << endl << "Please choose one of the following: " << endl
			<< "1: u + v (addition)" <<endl
			<< "2: u x v (cross product)" <<endl
			<< "3: u . v (dot product)" <<endl
			<< "-1: exit" << endl;
		cin >> select;

		switch (select){
			case 1:
				rx = ux + vx;
				ry = uy + vy;
				cout << endl << "u + v = " << rx << "*i + " << ry << "*j" << endl;
				select = 0;
				break;
		 	case 2:
		 		r = ux * vy - uy * vx;
		 		cout << endl << "u x v = "<< r << endl;
		 		select = 0;
		 		break;
		 	case 3:
		 		r = ux * vx + uy * vy;
		 		cout << endl << "u . v = "<< r << endl;
		 		select = 0;
		 		break;
		 	case -1:
		 		break;
		 	default :
		 		select = 0;
		}

	}

    system("PAUSE");
    return EXIT_SUCCESS;
}
