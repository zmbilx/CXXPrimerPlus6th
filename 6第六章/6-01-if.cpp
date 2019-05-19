#include <iostream>

int main(){
	using std::cin;
	using std::cout;
	
	char ch;
	int spaces = 0;
	int total = 0;
	
	cin.get(ch);
	
	while(ch != '.'){
		if (ch == ' ')
			++spaces;
		++total;
		cin.get(ch);
	}
	
	cout << spaces << " spaces "<<total;
	cout << " characters total in sentence.\n";
	
	return 0;
}

/*
out:
	The balloonist was an airhead
	with lofty goals.
	6 spaces 46 characters total in sentence.
*/