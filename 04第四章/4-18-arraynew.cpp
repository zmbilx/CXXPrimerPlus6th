#include <iostream>

int main(){
	using namespace std;
	double *p3 = new double[3]; 		//space for 3 double
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout<<"p3[1] is "<<p3[1]<<".\n";
	p3 = p3 + 1;
	cout<<"Now p3[0] is "<< p3[0] <<" and ";
	cout<<"p3[1] is "<< p3[1] <<".\n";
	p3 = p3 - 1;
	delete[] p3;
	return 0;
}


/*
out:
	p3[1] is 0.5.
	Now p3[0] is 0.5 and p3[1] is 0.8.
*/