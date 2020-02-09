#include <iostream>
int main(){
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tub = 10.0/3.0;
	double mint = 10.0/3.0;
	const float million = 1.0e6;
	
	cout<< "tub = "<<tub;
	cout<<", a million tubs = "<< million * tub;
	cout<<",\nand ten million tubs = ";
	cout<< 10 * million *tub <<endl;
	
	cout<< "mint = "<<mint << "and a million mints = ";
	cout << million * mint <<endl;
	return 0;
}

/*
output:
	tub = 3.333333, a million tubs = 3333333.250000,
	and ten million tubs = 33333332.000000
	mint = 3.333333and a million mints = 3333333.333333
*/
/*
笔记:
ios_base::fixed是设置cout为定点输出格式
ios_base::floatfield是设置输出时按浮点格式，小数点后有6位数字
*/