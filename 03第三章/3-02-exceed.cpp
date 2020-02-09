#include <iostream>
#define ZERO 0
#include <climits>

int main(){
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	
	cout<<"Sam has "<< sam << "dollars and Sue has "<<sue;
	cout<<" dollars deposited."<<endl
		<< "Add $1 to each account."<<endl << "Now ";
	sam = sam + 1;
	sue = sue + 1;
	cout<<"Sam has "<< sam << " dollars and Sue has "<<sue;
	cout<<" dollars deposited.\nPoor sam!"<<endl;
	
	sam = ZERO;
	sue = ZERO;
	cout << "sam has "<<sam<<" dollars and Sue has "<<sue;
	cout << " dollars deposited."<<endl;
	cout <<"Take $1 from each account."<<endl<<"Now";
	sam = sam - 1;
	sue = sue - 1;
	cout<<"Sam has "<<sam << "dollars and Sue has "<< sue;
	cout<<" dollars deposited.\nLucky Sue!"<<endl;
	
	return 0;
}

/*
output:
	Sam has 32767 dollars and Sue has 32767 dollars deposited.
	Add $1 to each account.
	Now Sam has -32768 dollars and Sue has 32768 dollars deposited.
	Poor sam!
	sam has 0 dollars and Sue has 0 dollars deposited.
	Take $1 from each account.
	NowSam has -1dollars and Sue has 65535 dollars deposited.
	Lucky Sue!
*/
// 笔记:其实负数在任何时候，计算机中存放的二进制形式均为原码取反加一，也就是其补码。
// 负数原码：此负数绝对值的二进制在存放在内存中，最高位置为1
// 正数原码：此正数正确二进制表现形式，最高位不做动作
// 无符号数与有符号数在内存中的表现形式完全相同，不同的是它们的读取方式和数据的保存规则，外部原因
// 造成同样的数不同的表现形式；有符号数则把第一位做为符号位，无符号数不做表示。