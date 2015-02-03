#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Menu{
	public:
		int drawMenu();
		int choice;
};

class File{
	public:
		string fileContents;

		void openFile(string fileName, ifstream& fin);
		void printFile();

};

enum MenuOption {
		FIRST
		, SECOND
		, THIRD
		, FOURTH
		, FIFTH
		, SIXTH
		, SEVENTH
		, EIGHTH
		, NINTH
		, TENTH
	};