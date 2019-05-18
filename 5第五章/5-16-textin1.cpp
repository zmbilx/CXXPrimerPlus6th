#include <iostream>

int main(){
	using namespace std;
	char ch;
	int count = 0;
	
	cout << "Enter characters; enter # to quit:\n";
	cin >> ch;
	while( ch != '#'){
		cout << ch;
		++count;
		cin >> ch;
	}
	
	cout << endl << count << " characters read.\n";
	return 0;
}

/*
out:
	Enter characters; enter # to quit:
	see ken run#really fast
	seekenrun
	9 characters read.
*/