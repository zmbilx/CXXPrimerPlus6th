#include <iostream>

int main(){
	using namespace std;
	int higgens = 5;
	int *pt = &higgens;
	
	cout<<"Value of higens = "<<higgens
		<<"; Address of higgens = "<<&higgens<<endl;
		
	cout<<"Value of *pt = "<<*pt
		<<"; Value of pt = "<< pt <<endl;
	return 0;
}

/*
output:
	Value of higens = 5; Address of higgens = 0x60ff08
	Value of *pt = 5; Value of pt = 0x60ff08
*/
