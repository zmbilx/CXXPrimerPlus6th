#include <iostream>

int main(){
	using namespace std;
	double wages[3] = {10000.0,20000.0,30000.0};
	short stacks[3] = {3,2,1};
	
	//Here are two ways to get the address of an array
	double * pw = wages;			// name of an array = address
	short * ps = &stacks[0];		// or use address operator
	
	// with array element
	cout << "pw = "<< pw << ", *pw = "<< *pw << endl;
	pw = pw + 1;
	cout <<"add 1 to the pw pointer:\n";
	cout <<"pw = "<< pw << ", *pw = "<< *pw <<"\n\n";
	cout <<"ps = "<< ps <<", *ps = "<< *ps << endl;
	ps = ps + 1;
	cout <<"add 1 to the ps pointer: \n";
	cout <<"ps ="<< ps <<", *ps = "<< *ps <<"\n\n";
	
	cout <<"access two elements with array notation.\n";
	cout <<"stacks[0] = "<<stacks[0]
		 <<", stacks[1] = "<< stacks[1] << endl;
	
	cout <<"access two element with pointer notation\n";
	cout <<"stacks = "<< *stacks
		<<", *(stack + 1) = "<<*(stacks + 1)<<endl;
		
	cout << sizeof(wages)<<" = size of wages array\n";
	cout << sizeof(pw) <<"= size of pw pointer\n";
	return 0;
}

/*
out: 
	pw = 0x29fef0, *pw = 10000
	add 1 to the pw pointer:
	pw = 0x29fef8, *pw = 20000

	ps = 0x29feea, *ps = 3
	add 1 to the ps pointer:
	ps =0x29feec, *ps = 2

	access two elements with array notation.
	stacks[0] = 3, stacks[1] = 2
	access two element with pointer notation
	stacks = 3, *(stack + 1) = 2
	24 = size of wages array
	4= size of pw pointer
*/