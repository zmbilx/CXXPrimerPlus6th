#include <iostream>

int main(){
	using namespace std;
	int auks,bats,coots;
	
	auks = 19.99+11.99;
	
	bats = (int)19.99 + (int)11.99;
	coots = int(19.99) + int(11.99);
	cout<< "auks = "<<auks<<", bats = "<<bats<<endl;
	
	char ch = 'Z';
	cout <<"The code for "<<ch<<" is ";
	cout<<int(ch)<<endl;
	cout<<"Yes,thecode is ";
	cout<< static_cast<int>(ch)<<endl;
	return 0;
}
/*
output:
	auks = 31, bats = 30
	The code for Z is 90
	Yes,thecode is 90
*/