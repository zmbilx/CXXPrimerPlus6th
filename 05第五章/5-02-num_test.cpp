#include <iostream>

int main(){
	using namespace std;
	cout << "Enter the starting coutdown value:";
	int limit;
	cin >> limit;
	int i;
	for (i=limit; i; i--)
		cout<<"i = "<< i <<"\n";
	cout << "Done now that i = "<< i <<"\n";
	return 0;
}

/*
out:
	Enter the starting coutdown value:4
	i = 4
	i = 3
	i = 2
	i = 1
	Done now that i = 0
*/