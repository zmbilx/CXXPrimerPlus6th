#include <iostream>
#include <ctime>

int main(){
	using namespace std;
	cout << "Enter the delay time, in second: ";
	float secs;
	cin >> secs;
	// typedef long clock_t;
	// #define CLOCKS_PER_SEC ((clock_t)1000)
	clock_t delay = secs * CLOCKS_PER_SEC;	// convert to clock ticks
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay );
	cout << "Done!\a\n";
	return 0;
}

/*
out:
	Enter the delay time, in second: 3
	starting
	Done!
*/