#include "enums.h"

using namespace std;

void File::openFile(string fileName, ifstream& fin){
	fin.open(fileName.c_str());

	while(!fin.eof()){
		getline(fin, fileContents);
		cout << fileContents << endl;
	}

}

void File::printFile(){
	cout << fileContents;
}


int Menu::drawMenu(){

	int choice;
	string advFileReading = ". Advanced file reading ";
	string delim = "\n";
	
	cout << FIRST << ". File Opening." + delim;
	cout << SECOND << ". File Printing" + delim;
	cout << THIRD << ". Pointers and Dynamic Arrays " + delim;
	cout << FOURTH << ". Random Numbers " + delim;
	cout << FIFTH << ". Advanced file reading " + delim;
	cout << TENTH << ". Exit " + delim;

	cin >> choice;

	return choice;
}