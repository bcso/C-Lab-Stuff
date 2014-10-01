//*********************************************
// Student1 Name: Brian So
// Student1 Number: 20477254
//
// SYDE 121 Lab: 03 Assignment: 
//
// Filename: lab0303.cpp
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
#include <cmath>

using namespace std;

//Conversion functions for speed between metric and imperial
double metricToImperialSpeed(double speedInKm){
	return speedInKm*0.6215;
}

double imperialToMetricSpeed(double speedInMiles){
	return speedInMiles/0.6215;
}

//Conversion functions for temp between metric and imperial
double metricToImperialTemp(double tempInC){
	return (9.0/5.0)*tempInC + 32.0;
}


double imperialToMetricTemp(double tempInF){
	return (tempInF - 32.0)/(1.8);
}

//Main Calculation
double windChillCalc(double windSpeed, double temperature){
	cout << "windSpeed is " << windSpeed << endl;
	if (windSpeed <= 4.0){		
		return temperature;
	} else if ((windSpeed > 4.0) && (windSpeed <= 45.0)){
		return 91.4 - (10.45 + 6.69*sqrt(windSpeed) - 0.447*windSpeed) * ((91.4 - temperature)/22.0);
	} else {
		return 1.6 * temperature - 55.0;
	}
}

int main(int argc, char *argv[])
{
	//Declare Variables
	double speedInKm = 0;
	double speedInMiles = 0;
	double tempInC = 0;
	double tempInF = 0;
	double windChillTempF = 0;
	double windChillTempC = 0;

	//Accept user input and do a basic value check
	while (speedInKm <= 0){
		cout << "Enter your speed in positive Km/h: " << endl;
		cin >> speedInKm;
		cout << "You have entered: " << speedInKm << " Km/h" << endl;
	}

	cout << "Enter your temperature in Celcius: " << endl;
	cin >> tempInC;
	cout << "You have entered: " << tempInC << " degrees Celcius" << endl;

	//Convert to imperial
	speedInMiles = metricToImperialSpeed(speedInKm);
	tempInF = metricToImperialTemp(tempInC);

	//Carry out calculation
	windChillTempF = windChillCalc(speedInMiles, tempInF);
	
	//Convert back to metric
	windChillTempC = imperialToMetricTemp(windChillTempF);	

	cout << "The wind-chill index in celcius is: " << windChillTempC << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}