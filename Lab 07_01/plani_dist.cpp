#include "coord.h"
#include <iostream>
#include <cmath>
using namespace std;

double plani_dist(point3D point1, point3D point2);
double ht_diff(point3D point1, point3D point2);
double azimuth(point3D point1, point3D point2);


int main(){
	point3D *ptr2;
	point3D point = {1, 30.0, 45.0, 40.0, 'B'};

	ptr2 = &point;

	// cout << "*ptr2 : " << *ptr2 <<endl;
	cout << "ptr2 : " << ptr2 <<endl;
	// cout << "point : " << point <<endl; 
	return 0;
}

//compute the plaimetric difference between 2 points
double plani_dist(point3D point1, point3D point2){
	double dp = 0.0;
	dp = sqrt((point2.xCoord - point1.xCoord)*(point2.xCoord - point1.xCoord)
			+ (point2.yCoord - point1.yCoord)*(point2.yCoord - point1.yCoord));
	return dp;
}

//compute the height difference between 2 points
double ht_diff(point3D point1, point3D point2){
	double dh = 0.0;
	dh = point2.zCoord - point1.zCoord;
	return dh;
}

//compute the azimuth between 2 points
double azimuth(point3D point1, point3D point2){
	double num = 0.0;
	double denom = 0.0;
	double ans = 0.0;

	num = (point2.yCoord - point1.yCoord);
	denom = (point2.xCoord - point1.xCoord);

	ans = atan2(num, denom);
	return ans;

}