#include <iostream>

int main(){
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	
	cout<<"Enter your name:\n";
	cin>>name;
	cout<<"Enter your favourite dessert:\n";
	cin>>dessert;
	cout<<"I have some delicious "<< dessert;
	cout<<" for you, "<<name << ".\n";
	return 0;
}

/*
Enter your name:
Alistair Dreeb			
Enter your favourite dessert:
I have some delicious Dreeb for you, Alistair.
笔记：
这里，它把Alistair做为一个输入，Dreeb做为了另一个输入，是一个不可取的操作。
*/