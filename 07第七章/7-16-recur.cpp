#include <iostream>

void cutdown(int n);

int main(){
	cutdown(4);
	return 0;
}

void cutdown(int n){
	using namespace std;
	cout<<"Coutding down ... "<< n << endl;
	if (n > 0 ){
		cutdown(n-1);
	}

	cout<< n <<": Kaboom!\n";
	
}

/*
output:
	Coutding down ... 4
	Coutding down ... 3
	Coutding down ... 2
	Coutding down ... 1
	Coutding down ... 0
	0: Kaboom!
	1: Kaboom!
	2: Kaboom!
	3: Kaboom!
	4: Kaboom!
*/
