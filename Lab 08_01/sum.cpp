#include "sumtwonums.h"
#include <iostream>
#include <cmath>

using namespace std;
const int arraysize = 20;
const char exit_char = 'q';

int main(int argc, char const *argv[])
{
	
	//Exit character checker
	char exitCheck;
	
	//Input checker
	char x;
	
	//Booleans to take care of leading zero/non valid inputs
	bool switched = false;
	bool stay = false;
	
	//Two counters for digits
	int count1 = 0;
	int count2 = 0;

	while (exitCheck != exit_char){ 
        int firstNumber[arraysize];  //declare new output array of ints
       	int secondNumber[arraysize];  //declare new output array of ints
        count1 = 0;
        count2 = 0;
		switched = false;
		stay = false;
		cout << endl<< "Enter first number less than 20 digits (q to quit)" << endl;
		do {
			cin.get(x);

            //Check for user quitting
            if (x == 'q'){
				exitCheck = x;
				break;
            }
            
			//stay premanently switches to true if first integer after leading zero is detected
			if ((((x - '0')<1) || ((x - '0')>9)) && (switched == false)){
				switched = false;
			} else {
				switched = true;
				stay = true;
			}

			//Add to array only when all conditions are met (first leading digit has been acounted for to not be zero, not at the delimiting character)
			if ((x != '\n') && (stay == true)){
				if ((x == '0') || (x == '1') || (x=='2') || (x=='3') || (x=='4') || (x=='5') || (x=='6') || (x=='7') || (x=='8') || (x=='9')){
					firstNumber[count1] = x - '0';	
					count1++;
				}
			} 
		} while(x != '\n');
        
        //Check if the user wants to quit in the first round
		if (exitCheck == exit_char){
			break;
		}

		displayInput(firstNumber, count1);

		// Reset switches for second number
		switched = false;
		stay = false;
		cout << endl<<"Enter second number less than 20 digits" << endl;
		do {
			cin.get(x);

            //Check for user quitting
            if (x == 'q'){
				exitCheck = x;
				break;
            }
            
			//stay premanently switches to true if first integer after leading zero is detected
			if ((((x - '0')<1) || ((x - '0')>9)) && (switched == false)){
				switched = false;
			} else {
				switched = true;
				stay = true;
			}

			//Add to array only when all conditions are met (first leading digit has been acounted for to not be zero, not at the delimiting character)
			if ((x != '\n') && (stay == true)){
				if ((x == '0') || (x == '1') || (x=='2') || (x=='3') || (x=='4') || (x=='5') || (x=='6') || (x=='7') || (x=='8') || (x=='9')){
					secondNumber[count2] = x - '0';	
					count2++;
				}
			} 
		} while(x != '\n');

        //Check if the user wants to quit in the second round
		if (exitCheck == exit_char){
			break;
		}

		displayInput(secondNumber, count2);

        //Compute the numbers now .
        compute(firstNumber, secondNumber, count1, count2);      
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
