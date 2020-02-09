#include <iostream>

int main(){
	using namespace std;
	cout<<"What year was your house built?\n";
	int year;
	cin>>year;
	cout<<"What is its street address?\n";
	char address[80];
	cin.get(address,80);
	cout<<"Year built: "<<year<<endl;
	cout<<"Adress: "<< address <<endl;
	cout<<"Done!\n";
	
	return 0;
}

/*
output:
	What year was your house built?
	1966
	What is its street address?
	Year built: 1966
	Adress: 
	Done!

笔记：
数字后面的字符串无法读取，那么我们可以在后面添加cin.get();
如下：
cin>>year;
cin.get();
*/