//*********************************************
// Student1 Name: Brian So
// Student1 Number: 20477254
//
// SYDE 121 Lab: 02 Assignment: 
//
// Filename: lab0202.cpp
// Date submitted: September 24, 2014
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
    //Declare all constants, these are known averages
	const double junEngPencil = 10;
	const double junEngPen = 5;
	const double junEngEra = 3;
	const double adminPencil = 2;
	const double adminPen = 10;
	const double adminEra = 1;
	const double senEngPencil = 7; 
	const double senEngPen = 5;
	const double senEngEra = 2;
	const double pencilBox = 25;
	const double penBox = 10;
	const double eraBox = 10;

    //These are user inputs
	double percentJunEng = 0.0;
	double percentSenEng = 0.0;
	double percentAdmin = 0.0;
	double companySize = 0.0;
	
	//The number of junior, senior engineers and administrators
	double numJunEng;
	double numSenEng;
	double numAdmin;

	//Intermediate pencil calculation variables
	double totJunEngPencil;
	double totSenEngPencil;
	double totAdminPencil;

	//Intermediate pen calculation variables
	double totJunEngPen;
	double totSenEngPen;
	double totAdminPen;

	//Intermediate eraser calculation variables
	double totJunEngEra;
	double totSenEngEra;
	double totAdminEra;
	
	//Final line answers (number of boxes of materials)
	double totPencilBox;	
	double totEraBox;
	double totPenBox;	

	char input[256];

    //User inputs company size 
	cout << "Enter total company size (as positive double): ";
	cin >> companySize;
	while(!cin || (companySize < 0)){
		cin.clear();
		//This line extracts and discards all characters waiting on the input stream
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Please enter a valid positive double value: ";	
		cin >> companySize;		
	}
	cout << "You have entered: " << companySize << endl;

    //User inputs percent of junior engineers
	cout << "Enter percent of Junior engineers (as positive double): ";
	cin >> percentJunEng;
	while(!cin || (percentJunEng < 0)){
		cin.clear();
		//This line extracts and discards all characters waiting on the input stream
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Please enter a valid positive double value: ";	
		cin >> percentJunEng;		
	}	
	cout << "You have entered: " << percentJunEng << endl;

    //User inputs pecent of senior engineers
	cout << "Enter percent of Seniort engineers (as positive double): ";
	cin >> percentSenEng;
	while(!cin || (percentSenEng < 0)){
		cin.clear();
		//This line extracts and discards all characters waiting on the input stream
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Please enter a valid positive double value: ";	
		cin >> percentSenEng;		
	}	
	cout << "You have entered: " << percentSenEng << endl;

    //Calculate percent of administrative persons
    percentAdmin = 100-percentJunEng-percentSenEng;

    //Calculate number of personelle
    numJunEng = (percentJunEng/100.0)*companySize;
	numSenEng = (percentSenEng/100.0)*companySize;
	numAdmin = (percentAdmin/100.0)*companySize;

    //Calcualte total amount of each stationary
	totJunEngPencil = junEngPencil *numJunEng;
	totSenEngPencil = senEngPencil *numSenEng;
	totAdminPencil = adminPencil *numAdmin;
	totJunEngPen = junEngPen *numJunEng;
	totSenEngPen = senEngPen *numSenEng;
	totAdminPen = adminPen *numAdmin;
	totJunEngEra = junEngEra *numJunEng;
	totSenEngEra = senEngEra *numSenEng;
	totAdminEra = adminEra *numAdmin;
    
    //Calculate total number of each box	
	totPencilBox = (totJunEngPencil + totSenEngPencil + totAdminPencil)/pencilBox;
	totPenBox = (totJunEngPen + totSenEngPen + totAdminPen)/penBox;	
	totEraBox = (totJunEngEra + totSenEngEra + totAdminEra)/eraBox;

	cout << "Total number of Pencil Boxes: " << totPencilBox << endl;
	cout << "Total number of Pen Boxes: " << totPenBox << endl;
	cout << "Total number of Eraser Boxes: " << totEraBox << endl;


    system("PAUSE");
    return EXIT_SUCCESS;
}
