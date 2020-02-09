#include <iostream>

int main(){
	using namespace std;
	int quizscores[10] = 
	{20, 20, 20, 20, 20, 19, 20, 18, 20, 20};
	cout << "Doing it right:\n";
	int i;
	for (i=0; quizscores[i] == 20; i++){
		cout << "quiz "<< i <<" is a 20 \n";
	}
	
	cout << "Doing it dangerously wrong:\n";
	for (i = 0; quizscores[i] = 20; i++){
		cout << "quiz "<< i << "is a 20\n";
	}
	return 0;
}

/*
out:
	Doing it right:
	quiz 0 is a 20
	quiz 1 is a 20
	quiz 2 is a 20
	quiz 3 is a 20
	quiz 4 is a 20
	Doing it dangerously wrong
	quiz 0is a 20
	quiz 1is a 20
	quiz 2is a 20
	quiz 3is a 20
*/