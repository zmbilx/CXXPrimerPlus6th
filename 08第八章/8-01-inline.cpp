#include <iostream>

inline double square(double x){
	return x*x;
}

int main(){
	using namespace std;
	double a,b;
	double c = 13.0;
	a = square(5.0);
	b = square(4.5+7.5);
	
	cout << "a = " << a << ", b = "<< b << endl;
	cout << "c = "<< c;
	cout << ", c squared =  " << square(c++) << endl;
	cout << "Now c = "<< c << endl;
	return 0;
}

/*
out:
a = 25, b = 144
c = 13, c squared =  169
Now c = 14
*/