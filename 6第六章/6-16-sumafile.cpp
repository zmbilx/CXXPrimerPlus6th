#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

int main(){
	using namespace std;
	char filename[SIZE];
	ifstream inFile;
	cout << "Enter name pf data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	
	if (!inFile.is_open()){
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;		// number of items read
	
	
	/*
	ifstream 的几个判断状态的函数
	
	bad()
		如果在读写过程中出错，返回 true 。例如：当我们要对一个不是打开为写状态
		的文件进行写入时，或者我们要写入的设备没有剩余空间的时候。

	fail()
		除了与bad() 同样的情况下会返回 true 以外，加上格式错误时也返回true,
		例如当想要读入一个整数，而获得了一个字母的时候。

	eof()
		如果读文件到达文件末尾，返回true。

	good()
		这是最通用的：如果调用以上任何一个函数返回true 的话，此函数返回 false 。
	*/
	inFile >> value;
	while(inFile.good()){		// while input good and not at eof
		++count;
		sum += value;
		inFile >> value;
	}
	
	if (inFile.eof()){
		cout << "End of file reached.\n";
	}else if (inFile.fail()){
		cout << "Input terminated by data mismatch.\n";
	}else{
		cout << "Input terminated for unknow reason.\n";
	}
	
	if (count == 0){
		cout << "No data processed.\n";
	}else{
		cout << "Item read: "<< count << endl;
		cout << "Sum: "<< sum << endl;
		cout << "Avterage: "<< sum / count <<endl;
	}
	inFile.close();
	return 0;
}