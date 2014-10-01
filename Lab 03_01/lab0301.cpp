//*********************************************
// Student1 Name: Brian So
// Student1 Number: 20477254
//
// SYDE 121 Lab: 03 Assignment: 
//
// Filename: lab0301.cpp
// Date submitted: October 1, 2014
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
    //Declare conversion constants
    const int secondsInMinute = 60;
    const int secondsInHour = 3600;
    const int secondsInDay = 86400;
    const int secondsInWeek = 604800;

    //Declare final line answer variables
    int seconds = 0;
    int minutes = 0;
    int hours = 0;
    int days = 0;
    int weeks = 0;
    
    //Helper variable to keep track of seconds
    int secondsRemaining = 0;

    //Basic value check implemented
    while (seconds == 0){
          cout << "Enter number of seconds, must be greater than 0: " << endl;
          cin >> seconds;
          cout << "You have entered: " << seconds << " seconds" << endl << endl;
    }    

    //Calculate respective quotient, and the remainder (via mod) in seconds 
    //is passed onto next unit of calculation.

    weeks = seconds/secondsInWeek;
    secondsRemaining = seconds%secondsInWeek;

    days = secondsRemaining/secondsInDay;
    secondsRemaining = secondsRemaining%secondsInDay;

    hours = secondsRemaining/secondsInHour;
    secondsRemaining = secondsRemaining%secondsInHour;

    minutes = secondsRemaining/secondsInMinute;
    secondsRemaining = secondsRemaining%secondsInMinute;

    seconds = secondsRemaining;
    
    //Display final results
    cout << "Weeks: " << weeks << endl;
    cout << "Days: " << days << endl;
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;


    system("PAUSE");
    return EXIT_SUCCESS;
}
