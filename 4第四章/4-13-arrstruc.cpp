#include<iostream>

struct inflatable{
	char name[20];
	float volum;
	double price;
};

int main(){
	using namespace std;
	
	inflatable guest[2]={
		{"Bambi",0.5,21.99},
		{"Godzilla", 2000, 565.99}
	};
	
	cout<<"The gusets "<<guest[0].name <<" and "<<guest[1].name
	<<"\nhave a combined volume of "
	<<guest[0].volum + guest[1].volum<<" cubic feet.\n";
	return 0;
}

/*
output:
	The gusets Bambi and Godzilla
	have a combined volume of 2000.5 cubic feet.
*/