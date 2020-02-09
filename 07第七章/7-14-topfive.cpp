#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5;

void display(const string sa[], int n);

int main(){
	string list[SIZE];
	cout << "Enter your "<<SIZE << "favorite astronomical sights:\n";
	for (unsigned int i=0; i<SIZE; i++){
		cout << i +1 << ": ";
		getline(cin, list[i]);
	}
	
	cout << "Your list:\n";
	display(list, SIZE);
	return 0;
}

void display(const string sa[], int n){
	for (unsigned int i=0; i<n; i++){
		cout << i + 1<<": "<< sa[i] << endl;
	}
}

/*
out:
	1: Orion Nebula
	2: M13
	3: Saturn
	4: Jupiter
	5: Moon
	Your list:
	1: Orion Nebula
	2: M13
	3: Saturn
	4: Jupiter
	5: Moon
*/