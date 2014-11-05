double plani_dist(point3D point1, point2);
double ht_diff(point3D point1, point2);
double azimuth(point3D point1, point2);

//compute the plaimetric difference between 2 points
double plani_dist(point3D point1, point2){
	double dp = 0.0;
	dp = sqrt((point2.xCoord - point1.xCoord)*(point2.xCoord - point1.xCoord)
			+ (point2.yCoord - point1.yCoord)*(point2.yCoord - point1.yCoord));
	return dp;
}

//compute the height difference between 2 points
double ht_diff(point3D point1, point2){
	dh = 0.0;
	dh = point2.zCoord - point1.zCoord;
	return dh;
}

//compute the azimuth between 2 points
double azimuth(point3D point1, point2){
	num = 0.0;
	denom = 0.0;
	ans = 0.0;

	num = (point2.yCoord - point1.yCoord);
	denom = (point2.xCoord - point1.xCoord);

	ans = atan2(num, denom);
	return ans;

}

