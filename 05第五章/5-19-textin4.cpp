#include <iostream>
#include <stdio.h>

int main(void){
	using namespace std;
	int ch;
	int count = 0;
	
	while((ch = cin.get()) != EOF){
		cout.put(char(ch));
		++count;
	}
	
	cout << endl << count <<" characters read.\n";
	return 0;
}

/*
out:
	The sullen mackerel sulks in the shadowy shallows.
	The sullen mackerel sulks in the shadowy shallows.
	Yes, but the blue bird of happiness harbors secrets.
	Yes, but the blue bird of happiness harbors secrets.
	^Z

	104 characters read.
*/