#include "sumtwonums.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;

//Display the input integer array
void displayInput(int input[], int size){

	if (size < 18){
		cout << "You have inputted: ";
		for (int i = 0; i  < size ; i++){
			cout << input[i];
		}
		cout <<endl;
	} else {
		cout << "Integer Overflow!" << endl;
	}
}

int add(int a, int b, int carry){
    return a+b+carry;
}

//Compute the sum of the two
void compute(int firstNumber[], int secondNumber[], int count1, int count2){      
     
     int carry = 0; //Used to temporarily store the digit carry
     int thisSum = 0; //Used to temporarily store the digit sum
     
     int firstNumberMaxIndex = count1-1; //convert length -> index
     int secondNumberMaxIndex = count2-1; //convert length -> index
     int addendDigit = 0;
          
     int sumIndex = 0; //the index from which to start filling the answer array
     
     int debugDigitCounter = 0;
     string answer = "";
     string tempString;
     ostringstream convert;
     
     if (count1 > count2){
         //If firstNumber has more digits than secondNumber
         addendDigit = secondNumberMaxIndex;
         for (int i = firstNumberMaxIndex; i >= 0 ; i--){
            //reset the temp string vars and string buffers for writing
            tempString = "";
            convert.str("");
             sumIndex = count1; //Account for the one extra possible digit
             
             /*cout << endl <<"firstNumber[" << i << "]" << " is " << firstNumber[i] << endl;
             cout <<"secondNumber[" << addendDigit << "]" << " is " << secondNumber[addendDigit] << endl;        
             cout <<"carry" << " is " << carry << endl; */        
             
             //Do the adding of digits + carry logic 
             thisSum = add(firstNumber[i], secondNumber[addendDigit], carry);             

             if (thisSum >9){
                carry = 1;
                thisSum = thisSum%10;
             } else {
                carry = 0;
             }             
             
             convert << thisSum;
             tempString = convert.str();             
             answer = tempString + answer;

             //append that carry if carry exists and this is the leading digit calculation
             if ((carry == 1) && (i == 0)){
                //reset the temp string vars and string buffers for writing
                tempString = "";
                convert.str("");
                convert << carry;
                tempString = convert.str();
                 
                answer = tempString + answer;                
             }
             
             //Update the counters
             sumIndex = sumIndex -1;
             addendDigit = addendDigit -1;
             
             //Check if we need to add zeros now for the addend
             if (addendDigit < 0){
                secondNumber[addendDigit] = 0;
             }
             
             debugDigitCounter++;
         }
     } else {
         //If secondNumber has more digits than firstNumber
         addendDigit = firstNumberMaxIndex;
         for (int i = secondNumberMaxIndex; i >= 0 ; i--){
            //reset the temp string vars and string buffers for writing
            tempString = "";
            convert.str("");
             sumIndex = count2; //Account for the one extra possible digit
             
             /*cout << endl <<"firstNumber[" << i << "]" << " is " << firstNumber[i] << endl;
             cout <<"secondNumber[" << addendDigit << "]" << " is " << secondNumber[addendDigit] << endl;        
             cout <<"carry" << " is " << carry << endl;*/
             
             //Do the adding of digits + carry logic 
             thisSum = secondNumber[i] + firstNumber[addendDigit] + carry;
             if (thisSum >9){
                carry = 1;
                thisSum = thisSum%10;
             } else {
                carry = 0;
             }

             convert << thisSum;
             tempString = convert.str();             
             answer = tempString + answer;

             //append that carry if carry exists and this is the leading digit calculation
             if ((carry == 1) && (i == 0)){
                //reset the temp string vars and string buffers for writing
                tempString = "";
                convert.str("");
                convert << carry;
                tempString = convert.str();
                 
                answer = tempString + answer;                
             }
             
             //Update the counters
             sumIndex = sumIndex -1;
             addendDigit = addendDigit -1;
             
             //Check if we need to add zeros now for the addend
             if (addendDigit < 0){
                firstNumber[addendDigit] = 0;
             }
             
             debugDigitCounter++;
         }
    }
     
     cout <<"Answer is: " << answer;
     cout << endl << endl;
          
}



