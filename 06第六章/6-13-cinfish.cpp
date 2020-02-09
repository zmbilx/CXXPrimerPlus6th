#include <iostream>

const int Max = 5;

int main(){
	using namespace std;
	double fish[Max];
	cout << "Please enter the weights of your fish.\n";
	cout << " You may enter up to " << Max
		 << " fish < q to terminate >.\n";
	cout << "fish #1: ";
	int i = 0;
	while (i < Max && cin >> fish[i]){
		if (++i < Max)
			cout << "fish #"<< i+1<<": ";
	}
	// calculate average
	double total = 0.0;
	for (int j = 0; j< i; j++){
		total += fish[j];
	}
	// report result
	if (i == 0){
		cout << "No fish\n";
	}else{
		cout << total / i << " = arverage weight of "
			 << i << " fish\n";
		cout << "Done.\n";
	}
	return 0;
}

/*
out:
	Please enter the weights of your fish.
	 You may enter up to 5 fish < q to terminate >.
	fish #1: 30
	fish #2: 35
	fish #3: 25
	fish #4: 40
	fish #5: q
	32.5 = arverage weight of 4 fish
	Done.
*/