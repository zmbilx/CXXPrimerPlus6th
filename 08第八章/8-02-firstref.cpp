#include <iostream>

int main(){
	using namespace std;
	int rats = 101;
	int & rodents = rats;
	
	cout << "rats = "<< rats;
	cout << ", rodents = "<< rodents << endl;
	return 0;
}