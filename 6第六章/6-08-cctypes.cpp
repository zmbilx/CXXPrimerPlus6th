#include <iostream>
#include <cctype>

int main(){
	using namespace std;
	cout << "Enter txt for analysis and type @"
			"to terminate input.\n";
	
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;
	
	cin.get(ch);
	while(ch != '@'){
		if (isalpha(ch)){
			chars++;
		}else if (isspace(ch)){
			whitespace++;
		}else if(isdigit(ch)){
			digits++;
		}else if (ispunct(ch)){  // 检测是否为标点符号
			punct++;
		}else{
			others++;
		}
		cin.get(ch);
	}
	
	cout << chars<<" letters, "
		 << whitespace << " whitespacse, "
		 << digits << " digits, "
		 << punct << " punctuations, "
		 << others << " others.\n";
	return 0;
}

/*
output:
	a b12,#@
	2 letters, 1 whitespacse, 2 digits, 2 punctuations, 0 others.
*/