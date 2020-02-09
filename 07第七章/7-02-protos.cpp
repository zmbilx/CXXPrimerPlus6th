#include <iostream>

void cheers(int);

double cube(double x);

int main(){
	using namespace std;
	cheers(5);		// function call
	cout << "Give me a number: ";
	double side;
	cin >> side;
	
	double volume = cube(side);
	cout << "A " << side << "-foot cube has a volume of ";
	cout << volume << " cubic feet.\n";
	cheers(cube(2));		
	
	return 0;
}

void cheers(int n){
	using namespace std;
	for (int i=0; i<n; i++){
		cout << " Cheers! ";
	}
	cout << endl;
}

double cube(double x){
	return x*x;
}

/*
output:

	 Cheers!  Cheers!  Cheers!  Cheers!  Cheers!
	Give me a number: 5
	A 5-foot cube has a volume of 25 cubic feet.
	 Cheers!  Cheers!  Cheers!  Cheers!
*/