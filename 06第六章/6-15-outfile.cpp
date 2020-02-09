#include <iostream>
#include <fstream>

int main(){
	using namespace std;
	
	char automobile[50];
	int year;
	double a_price;
	double d_price;
	
	
	ofstream outFile;
	outFile.open("carinfo.txt");
	
	
	cout << "Enter the maked and model of automobile: ";
	cin.getline(automobile,50);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the original asking price:";
	cin >> a_price;
	d_price = 0.913*a_price;
	
	// display information on screen with out
	
	cout << fixed;
	cout.precision(2);			// 小数点后保留的位数
	cout.setf(ios_base::showpoint);
	cout << "Make and model: "<< automobile << endl;
	cout << "Year: "<< year << endl;
	cout << "Was asking $ "<< a_price << endl;
	cout << "Now asking $ "<< d_price << endl;
	
	// now do exact same things using outFile instead of cout
	outFile << fixed;		//fixed 使用小数计数法
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: "<< automobile<<endl;
	outFile << "Year: "<<year<<endl;
	outFile << "Was asking $"<< a_price <<endl;
	outFile << "Now asking $"<< d_price <<endl;
	
	outFile.close();			// done with file
	return 0;
}


/*
cout<<fixed  //用一般的方式输出浮点型，例如Ｃ＋＋程序在控制台显示的时候大一点的数，显示的时候使用了科学计数法，使用该命令即可像一般的方式显示

cout.precision（2） //设置精确度为2，并返回上一次的设置。

cout.setf（iOS_base::showpoint）  //显示浮点数小数点后面的零。
*/

/*
outfile:
	Enter the maked and model of automobile: Flitz Perky
	Enter the model year: 2009
	Enter the original asking price:13500
	Make and model: Flitz Perky
	Year: 2009
	Was asking $ 13500.00
	Now asking $ 12325.50
*/