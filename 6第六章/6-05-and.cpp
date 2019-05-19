#include <iostream>
const int ArSize = 6;

int main(){
	using namespace std;
	float naaq[ArSize];
	cout << "Enter the NAAQs (New Age Awareness Quotients)"
		 << "of\nyour neigbors. Program terminates "
		 << "when you make\n "<< ArSize << " enteries."
		 << "or enter a negative value.\n";
	
	int i = 0;
	float temp;
	cout << "First value: ";
	cin >> temp;
	
	while(i < ArSize && temp >= 0){
		naaq[i] = temp;
		++i;
		if (i < ArSize){
			cout << "Next value: ";
			cin >> temp;
		}
	}
	
	if (i == 0){
		cout << "No data-bye\n";
	}else{
		cout << "Enter you NAAQ:";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j<i; j++){
			if (naaq[j] > you)
				++count;
		}
		cout << count;
		cout << "of your neighbors have greater awareness of \n"
			<< "the New Age than you do.\n";
	}
	return 0;
}

/*
out:
	Enter the NAAQs (New Age Awareness Quotients)of
	your neigbors. Program terminates when you make
	 6 enteries.or enter a negative value.
	First value: 28
	Next value: 72
	Next value: 15
	Next value: 6
	Next value: 130
	Next value: 145
	Enter you NAAQ:50
	3of your neighbors have greater awareness of
	the New Age than you do.
*/