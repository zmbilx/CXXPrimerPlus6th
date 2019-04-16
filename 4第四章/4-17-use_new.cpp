#include <iostream>

int main(){
	using namespace std;
	int nights = 1001;
	int *pt = new int;
	*pt = 1001;
	
	cout<<"nights values = ";
	cout<< nights <<": location"<<&nights<<endl;
	cout<<"int ";
	cout<<"value = "<<*pt<<": location = "<<pt<<endl;
	
	double* pd = new double;
	*pd = 10000001.0;
	cout<<"double ";
	cout<<"value = "<<*pd<<"; location = "<<pd<<endl;
	cout<<"location of pointer pd: "<<&pd<<endl;
	cout<<"sizeof pd = "<<sizeof pd;
	cout<<"size of *pd = "<< sizeof(*pd)<<endl;
	return 0;
}

/*
output:
	nights values = 1001: location0x60ff08
	int value = 1001: location = 0xff1868
	double value = 1e+007; location = 0xff1898
	location of pointer pd: 0x60ff04
	sizeof pd = 4size of *pd = 8
*/