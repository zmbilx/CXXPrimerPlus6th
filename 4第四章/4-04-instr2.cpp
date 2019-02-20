#include <iostream>

int main(){
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	
	cout<<"Enter your name:\n";
	cin.getline(name,ArSize);			// read through newline
	cout << "Enter your favourite dessert:\n";
	cin.getline(dessert, ArSize);
	cout<<"I have some delicious "<<dessert;
	cout<<" for you,"<<name<<".\n";
	
	return 0;
}

/*
output:
	Enter your name:
	Dirk Hammernose
	Enter your favourite dessert:
	Radish Torte
	I have some delicious Radish Torte for you,Dirk Hammernose.
*/