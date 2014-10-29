#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

// all the root components declared in the following structure 
struct root_components {
	char imaginary = ' '; 
	double real = 0; 
	};
root_components root1, root2;

//function declaration 
void get_input (double&a, double&b, double&c);
void display_output ();
void calculation (double&a, double&b, double&c);

int main() {
	double a, b, c;
	
	cout << "This program calculates the roots of a quadratic for you" <<endl;
	get_input(a,b,c); 
	calculation(a, b, c);
	display_output();
	
	return 0;
}

// function definition for get_input 
void get_input (double&a, double&b, double&c){
	cout << "A quadratic is composed of ax^2 + bx + c" <<endl
		<< "Please enter the value of a, b, and c." <<endl
		<< "a: "; 
	cin >> a; 
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	
	return;
}

//function definition for calculation 
void calculation (double&a, double&b, double&c) {
	double discriminant = 0;
	discriminant = (pow(b,2)) - (4*a*c);
	if (discriminant < 0){
		root1.imaginary = 'i';
		root2.imaginary = 'i';
		discriminant = abs(discriminant);
	}
	root1.real = ((-b) + sqrt(discriminant))/(2*a);
	root2.real = ((-b) - sqrt(discriminant))/(2*a);
	return; 
}

//function definition for display_output 
void display_output (){
	if (root1.imaginary == 'i'){
		cout << "Roots are complex numbers (i = imaginary number)" << endl; 
		cout << "Root 1: " << root1.real << root1.imaginary <<endl;
		cout << "Root 2: " << root2.real << root2.imaginary <<endl;
	}else {
		cout << "The roots are:" << endl;
		cout << "Root 1: " << root1.real <<endl;
		cout << "Root 2: " << root2.real <<endl;
	}
	return;
}

