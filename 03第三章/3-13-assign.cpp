#include <iostream>

int main(){
	using namespace std;
	
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;
	int guess(3.9832);
	int debt = 7.2E12;
	cout<< "tree = "<<tree <<endl;
	cout<< "guess = "<< guess <<endl;
	cout<< "debt = "<<debt<<endl;
	return 0;
}
/*
output:
	tree = 3.000000
	guess = 3
	debt = 1634811904
*/