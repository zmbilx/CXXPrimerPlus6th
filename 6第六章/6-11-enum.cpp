// enum.cpp -- using enum
#include <iostream>

// create named constants(常量) for 0 - 6
// violet(紫色) indigo(靛蓝)
enum {red, orange, yellow, green, blue, violet, indigo};

int main(){
	using namespace std;
	cout << "Enter color code (0-6):";
	int code;
	cin >> code;
	while(code >= red && code <= indigo){
		switch(code)
		{
			case red	: cout << "Her lips were red.\n"; break;
			case orange	: cout << "Her hair was orange.\n"; break;
			case yellow	: cout << "Her shoes were yello.\n"; break;
			case green	: cout << "Her nails were green.\n"; break;
			case blue	: cout << "Her sweatsuit were blue.\n"; break;
			case violet : cout << "Her eyes were violet.\n"; break;
			case indigo : cout << "Her mood was indigo.\n"; break;
		}
		cout << "Enter color code (0-6): ";
		cin >> code;
	}
	cout << "Bye\n";
	return 0;
}

/*
out put:
	Enter color code (0-6): 3
	Her nails were green.
	Enter color code (0-6): 5
	Her eyes were violet.
	Enter color code (0-6): 2
	Her shoes were yello.
	Enter color code (0-6): 8
	Bye
*/