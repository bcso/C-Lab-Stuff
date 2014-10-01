#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const int secondsInMinute = 60;
    const int secondsInHour = 3600;
    const int secondsInDay = 86400;
    const int secondsInWeek = 604800;

    int seconds = 0;
    int minutes = 0;
    int hours = 0;
    int days = 0;
    int weeks = 0;
    
    int secondsRemaining = 0;

    int daysRemainingInSeconds = 0;
    int hoursRemainingInSeconds = 0;
    int minutesRemainingInSeconds = 0;

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
    
    cout << "Weeks: " << weeks << endl;
    cout << "Days: " << days << endl;
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;


    system("PAUSE");
    return EXIT_SUCCESS;
}
