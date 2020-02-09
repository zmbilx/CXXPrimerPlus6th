#include <iostream>

// 多种多样的符号，同样的标志
// various notations, same signatures 
// 注意一下，这里返回的是一个指针，真正的f1，f2，f3只是函数的名字，它们在这里可以看作是一级指针
const double* f1(const double ar[], int n);
const double* f2(const double [], int);
const double* f3(const double*, int);

int main(){
	using namespace std;
	double av[3] = {1112.3,1542.6,2227.9};
	
	//pointer to a function
	const double *(*p1)(const double *, int) = f1;
	auto p2 = f2;
	cout << " Using pointers to functions:\n";
	cout << " Address Value\n";
	cout << (*p1)(av,3) << ":" <<*(*p1)(av, 3) << endl;
	cout << p2(av, 3) << ": " << *p2(av,3) << endl;
	
	// pa an array of pointers
	const double *(*pa[3])(const double *, int) = {f1,f2,f3};
	auto pb = pa;
	
	cout << "\nUsing an array of pointers to functions:\n";
	cout <<" Address Value\n";
	for (int i = 0; i < 3; i++){
		cout <<pa[i](av,3)<<": "<<*pa[i](av,3)<<endl;
	}
	cout << "\nUsing a pointer to to a function:\n";
	cout << "Address Value\n";
	for (int i=0; i<3; i++){
		cout <<pb[i](av,3) << ": "<<*pb[i](av,3)<,endl;
	}
	
	// what about a pointer to an array of function pointers
	cout << "\nUsing pointers to array of function pointers:\n";
	cout << "Address Value\n";
	// easy way to declare pc
	auto pc = &pa;
	cout << (*pc)[0](av,3)<<":"<<*(*pc)[0](av,3)<<endl;
	// hard way to declare pd
	const double*(*(*pd)[3])(const double*, int) = &pa;
	// store return value in pdb
	const double* pdb = (*pd)[1](av,3);	// 这里先取*的意思是先拿到pa的值，然后再按pa的数组取相关的值
	cout << pdb << ": "<<*pdb << endl;
	cout << (*(*pd)[2])(av,3) << ": "<< *(*(*pd)[2])(av,3)<<endl;
	
	return 0;
}

const double *f1 (const double* ar, int n){
	return ar;
}

const double *f2 (const double ar[], int n){
	return ar+1;
}

const double *f3 (const double ar[], int n){
	return ar+2;
}

/*
output:
	 Using pointers to functions:
	 Address Value
	00AFF9E8:1112.3
	00AFF9F0: 1542.6

	Using an array of pointers to functions:
	 Address Value
	00AFF9E8: 1112.3
	00AFF9F0: 1542.6
	00AFF9F8: 2227.9

	Using a pointer to to a function:
	Address Value
	00AFF9E8: 1112.3
	00AFF9F0: 1542.6
	00AFF9F8: 2227.9

	Using pointers to array of function pointers:
	Address Value
	00AFF9E8:1112.3
	00AFF9F0: 1542.6
	00AFF9F8: 2227.9
*/