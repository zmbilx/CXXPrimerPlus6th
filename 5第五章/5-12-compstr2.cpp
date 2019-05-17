#include <iostream>
#include <string>

int main(){
	using namespace std;
	string word = "?ate";
	
	for (char ch='a'; word != "mate"; ch++){
		cout << word << endl;
		word[0] = ch;
	}
	
	cout << "After loop ends, word is " << word << endl;
	
	return 0;
}

/*
out:
	?ate
	aate
	bate
	cate
	date
	eate
	fate
	gate
	hate
	iate
	jate
	kate
	late
	After loop ends, word is mate
*/