#include <iostream>

int main(){
	using namespace std;
	int carrots;
	
	carrots  = 25;
	cout<<"I have ";
	cout<<carrots;
	cout<<" carrots.";
	cout<<endl;
	carrots = carrots - 1;
	cout<<"Crunch,crunch. Now I have "<<carrots<<" carrots."<<endl;
	return 0;
}
/*
output:

I have 25 carrots.
Crunch,crunch. Now I have 24 carrots.
*/