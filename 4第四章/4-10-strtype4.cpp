#include <iostream>
#include <string>
#include <cstring>

int main(){
	using namespace std;
	char charr[20];
	string str;
	
	cout<<"Length of string in charr before input:"
		<<strlen(charr)<<endl;
	
	cout<<"Length of string in str before input:"
		<<str.length()<<endl;
		
	cout<<"Enter a line of text:\n";
	cin.getline(charr, 20);			// 标志最大字符串长度
	cout<< "You entered:"<<charr<<endl;
	cout<< "Enter another line of text:\n";
	getline(cin,str);				// cin now an argument; no length specifier
	cout<<"You entered: "<<str<<endl;
	cout<<"Length of string in char after input:"
		<< strlen(charr)<<endl;
	cout<<"Length of string in str after input:"
		<< str.size()<<endl;
	return 0;
}

/*

output:

	Length of string in charr before input:11
	Length of string in str before input:0
	Enter a line of text:
	peanut butter
	You entered:peanut butter
	Enter another line of text:
	blueberry jam
	You entered: blueberry jam
	Length of string in char after input:13
	Length of string in str after input:13
*/