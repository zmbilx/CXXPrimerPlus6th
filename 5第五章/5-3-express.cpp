#include <iostream>

int main(){
	using namespace std;
	int x;
	
	cout << "The exprexxion x = 100 has the value:";
	cout << (x = 100)<<endl;
	cout << "Now x = "<< x <<endl;
	cout << "The expression x < 3 has the value: ";
	cout << (x < 3)<<endl;
	cout << "The expression x > 3 has the value: ";
	cout << (x > 3)<<endl;
	// 设置输出状态，之前的真假都为1 或 0 ，现在变为Treu False
	cout.setf(ios_base::boolalpha);
	cout << "The expression x < 3 has the value :";
	cout << (x < 3)<<endl;
	cout << "The expression x > 3 has the value: ";
	cout << (x > 3)<<endl;
	return 0;
}
/*
out:
	The exprexxion x = 100 has the value:100
	Now x = 100
	The expression x < 3 has the value: 0
	The expression x > 3 has the value: 1
	The expression x < 3 has the value :false
	The expression x > 3 has the value: true
*/