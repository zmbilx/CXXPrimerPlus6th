#include <iostream>

int main(){
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	
	cout<< "Enter your name:\n";
	cin.get(name,ArSize).get();
	cout<<"Enter your favour dessert:\n";
	cin.get(dessert, ArSize).get();
	cout<<"I have some delicious "<<dessert;
	cout<<" for you, "<<name<<".\n";
	
	return 0;
}
/*
output:
	Enter your name:
	Mai Parfait
	Enter your favour dessert:
	Chocolate Mousse
	I have some delicious Chocolate Mousse for you, Mai Parfait.
*/