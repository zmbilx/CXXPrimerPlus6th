#include <iostream>
int main(){
	using namespace std;
	float a = 2.34E+22f;
	float b =  a + 1.0f;
	
	cout<< "a = "<<a<<endl;
	cout<< "b -a = "<<b-a<<endl;
	return 0;
}
/*
output:
a = 2.34e+22
b -a = 0
*/

//笔记：
//  b - a 本来应该等于1，但float能表示的数字类型只能为数字的前6到7位，且a是小数点左边有23位的数字
//  因此，修改第23位是没有用的。