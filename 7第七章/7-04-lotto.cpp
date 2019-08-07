#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main(){
	using namespace std;
	double total, choice;
	
	cout << "Enter the total number of choices on the game card and\n"
			"the number of picks allowed:\n";
	
	while((cin>>total>>choice) && choice <= total){
		cout << "You have one chance in ";
		cout << probability(total, choice);
		cout << " of winning.\n";
		cout << "Next two numbers (q to quit):";
	}
	cout << "bye\n";
	return 0;
}

long double probability(unsigned numbers, unsigned picks){
	long double result = 1.0;		// here come some local variables
	long double n;
	unsigned p;
	for (n=numbers, p = picks; p > 0; n--, p--){
		result = result * n / p;
	}
	return result;
}
/*
out:
	Enter the total number of choices on the game card and
	the number of picks allowed:
	49 6
	You have one chance in -1.82329e+103 of winning.
	Next two numbers (q to quit):51 6
	You have one chance in -2.25542e-263 of winning.
	Next two numbers (q to quit):38 6
	You have one chance in -1.28483e-113 of winning.
	Next two numbers (q to quit):q
	bye

*/