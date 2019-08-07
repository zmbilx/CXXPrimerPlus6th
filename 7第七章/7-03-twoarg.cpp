#include <iostream>

using namespace std;

void n_char(char, int);

int main(){
	int times;
	char ch;
	
	cout << "Enter a character: ";
	cin >> ch;
	
	while(ch != 'q')		//q to quit
	{
		cout << "Enter an integer: "; 
		cin >> times;
		n_char(ch, times);	// function with two arguments
		cout << "\nEnter another character or press the"
			 << "q-key to quit: ";
		cin >> ch;
	}
	
	cout << "The value of times is "<< times << ".\n";
	cout << "Bye\n";
	return 0;
}

void n_char(char c, int n)	//display c n thimes
{
	
	while (n-- > 0){
		cout << c;
	}
	
}

/*
out:
	Enter a character: W
	Enter an integer: 50
	WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
	Enter another character or press theq-key to quit: a
	Enter an integer: 20
	aaaaaaaaaaaaaaaaaaaa
	Enter another character or press theq-key to quit: q
	The value of times is 20.
	Bye
*/