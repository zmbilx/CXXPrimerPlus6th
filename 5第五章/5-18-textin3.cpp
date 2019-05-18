#include <iostream>

int main(){
	using namespace std;
	char ch;
	int count = 0;
	cin.get(ch);
	
	while(cin.fail() == false){
		cout << ch;
		++count;
		cin.get(ch);
	}
	
	cout << endl << count << " characters read.\n";
	return 0;
}

/*
out:
	The green bird sings in the winter. <ENTER>
	The green bird sings in the winter.
	Yes, but the crow flies in the dawn.<ENTER>
	Yes, but the crow flies in the dawn.
	<CTRL>+<Z><ENTER>^Z

	73 characters read.
*/