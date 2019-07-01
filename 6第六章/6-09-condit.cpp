#include <iostream>

int main(){
	using namespace std;
	int a,b;
	cout << "Enter two integers: ";
	cin >> a >> b;
	cout << "The larger of "<< a << " and " << b;
	int c = a > b ? a: b;
	cout << " is "<< c << endl;
	return 0;
}


/*
out:
	Enter two integers: 25 28
	The larger of 25 and 28 is 28
*/