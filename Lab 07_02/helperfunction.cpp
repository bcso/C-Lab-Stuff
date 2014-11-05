bool inputCheck (int input);

bool inputCheck(int input){
	if (input <= 0){
		cout << "Input must be a positive integer!";
		return false;
	} else{
		return true;
	}
}