#include <iostream>

const int ArSize = 80;

int main(){
	using namespace std;
	char line[ArSize];
	int spaces = 0;
	
	
	cout << "Enter a line of text:\n";
	cin.get(line,ArSize);
	cout << "Complete line: \n" << line << endl;
	cout << "Line through first period:\n";
	for (int i = 0; line[i] != '\0'; i++){
		cout << line[i];		// display character
		if (line[i] == '.') 	// quit if it is a period
			break;
		if (line[i] != ' ')
			continue;
		spaces++;
	}
	cout << "\n" << spaces <<" spaces\n";
	cout << "Done.\n";
	return 0;
}
/*
out:
	Enter a line of text:
	Let's do lunch today. You can pay!
	Complete line:
	Let's do lunch today. You can pay!
	Line through first period:
	Let's do lunch today.
	3 spaces
	Done.
*/