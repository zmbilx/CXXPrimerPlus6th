#include <iostream>

// 当const 在*之前，则是指针不是常量，但指针指向的内容为常量
// 当const 在*之后，则是指针为常量，但其指针向的内容不是常量
unsigned int c_in_str(const char* str, char ch);

int main(){
	using namespace std;
	char mmm[15] = "minimum";
	
	const char* wail = "ululate";
	
	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');
	cout << ms << " m characters in " << mmm << endl;
	cout << us << " u characters in " << wail << endl;

	return 0;
}

unsigned int c_in_str(const char* str, char ch){
	unsigned int count = 0;
	while (*str){
		if (*str == ch)
			count++;
		str++;
	}
	return count;
}

/*out:
	3 m characters in minimum
	2 u characters in ululate
*/