#include <iostream>
#include <cstring>

int main(){
	using namespace std;
	char word[5] = "?ate";
	
	for (char ch = 'a'; strcmp(word,"mate"); ch++){
		cout << word <<endl;
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