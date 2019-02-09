#include <iostream>

int main(){
	using namespace std;
	int carrots;
	cout<<"How many carrots do you have?"<<endl;
	cin>>carrots;
	cout<<"Here are two more.";
	carrots = carrots + 2;
	cout<<"Now you have "<<carrots<<" carrots."<<endl;
	return 0;
}

/*
output:
	How many carrots do you have?
	12
	Here are two more.Now you have 14 carrots.
*/