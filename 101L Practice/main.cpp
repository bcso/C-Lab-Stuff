#include "enums.h"

using namespace std;

int main(int argc, char const *argv[]){
	Menu myMenu;
	string fileName;
	File myFile;

	ifstream fin;
	ofstream fout;

	int size;

	typedef int* IntPtr;
	IntPtr ip, intPoint1, intPoint2;

	int myInt1, myInt2;


	while (myMenu.choice != TENTH){

		myMenu.choice = myMenu.drawMenu();
		cout << "Choice is: " << myMenu.choice <<endl;

		switch(myMenu.choice){
			// File Reading
			case FIRST:
				cout << "Read a file." << myMenu.choice << endl;
				cout << "What is your file name: ";
				cin >> fileName;

				myFile.openFile(fileName, fin);
				break;
			// File Printing
			case SECOND:
				cout << "Print the file." << myMenu.choice << endl;

				myFile.printFile();
				break;
			// Pointers and Dynamic Arrays 				
			case THIRD:

				cout << "Size of array: " << endl;
				cin >> size;
				ip = new int[size]; //Dynamically declare the array

				for (int i = 0 ; i < size ; i++){
					ip[i] = i;
					cout << "Element " << i << " is of value: " << ip[i] << " and address of : " << &ip[i] << endl;
				}
				delete [] ip; //reset the memory location

				myInt1 = 9; cout << "myInt1 : " << myInt1 << endl;
				intPoint1 = &myInt1; cout << "intPoint1 : " << intPoint1 << " , &myInt1 : " << &myInt1 << endl;
				*intPoint1 = 10; cout << "myInt1 : " << myInt1 << endl;

				cout << "myInt1 == 10 : " << (myInt1 == 10) << endl;
				cout << "&myInt1 == intPoint1 : " << (&myInt1 == intPoint1) << endl;
				cout << "*intPoint1 == myInt1 : " << (*intPoint1 == myInt1) << endl;

				intPoint2 = intPoint1;

				cout << "*intPoint2 : " << *intPoint2 << endl;

				break;
			// Random Numbers	
			case FOURTH:

				cout << "Using a time seed...: ";
				srand(time(NULL));

				for (int i = 0; i < 10; i++){
					cout << rand()%10 + 1 << " ";
				}

				cout << endl;
				cout << "Using int 3 seed...:";
				srand(3);

				for (int i = 0; i < 10; i++){
					cout << rand()%10 + 1 << " ";
				}
				cout << endl;
				break;
			case FIFTH:

				cout << "Enter File name: " << endl;
				cin >> fileName;
				myFile.openFile(fileName, fin);
				break;
			default:
			    cout <<" you dun goofed" << endl;
			    break;
		}		
	}
	fin.close();
	return 0;
}
