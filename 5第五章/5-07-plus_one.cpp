#include <iostream>

int main(){
	using std::cout;
	int a = 20;
	int b = 20;
	cout << "a = "<< a <<"; b = "<< b << "\n";
	cout << "a++ = "<< a++ <<"; ++b = " << ++b<<"\n";
	cout << "a = "<< a <<"; b = "<< b <<"\n";
	return 0;
}

/*
out:
	a = 20; b = 20
	a++ = 20; ++b = 21
	a = 21; b = 21
*/