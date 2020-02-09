#include <iostream>

const int Max = 5;

int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main(){
	using namespace std;
	double properties[Max];

	int size = fill_array(properties, Max);
	show_array(properties, size);
	if (size > 0){
		cout << "Enter revaluation factor:";
		double factor;
		while (!(cin >> factor)){
			cin.clear();
			while(cin.get() != '\n'){
				continue;
			}
			cout << "Bad input;Please enter a number: ";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}

int fill_array(double ar[], int limit){
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < limit; i++){
		cout << "Enter value#"<<(i+1)<<": ";
		cin >> temp;
		if (!cin) // bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}else if (temp < 0 ){
			break;
		}
		ar[i] = temp;
	}
	return i;
}

void show_array(const double ar[], int n){
	using namespace std;
	for (int i = 0; i < n; i++){
		cout << "Property #"<<(i+1)<<": $";
		cout << ar[i] <<endl;
	}
}

void revalue(double r, double ar[], int n){
	for (int i = 0; i < n; i++){
		ar[i] *= r;
	}
}

/*
out:
	Enter value#1: 100000
	Enter value#2: 80000
	Enter value#3: 222000
	Enter value#4: 240000
	Enter value#5: 118000
	Property #1: $100000
	Property #2: $80000
	Property #3: $222000
	Property #4: $240000
	Property #5: $118000
	Enter revaluation factor:0.8
	Property #1: $80000
	Property #2: $64000
	Property #3: $177600
	Property #4: $192000
	Property #5: $94400
	Done.

out:	
	Enter value#1: 200000
	Enter value#2: 84000
	Enter value#3: 160000
	Enter value#4: -2
	Property #1: $200000
	Property #2: $84000
	Property #3: $160000
	Enter revaluation factor:1.20
	Property #1: $240000
	Property #2: $100800
	Property #3: $192000
	Done.
*/