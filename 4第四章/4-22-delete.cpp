#include <iostream>
#include <cstring>
using namespace std;

char* getname(void);

int main(){
	char* name;
	name  = getname();
	cout << name <<" at "<<(int*)name<<"\n";
	delete[] name;
	
	name = getname();
	cout << name << " at "<<(int*)name<<"\n";
	delete[] name;			//memeory freed again
	return 0;
}

char* getname(void){
	
	char temp[80];
	cout<<"Enter last name: ";
	cin>>temp;
	char* pn = new char[strlen(temp)];
	strcpy(pn,temp);
	return pn;
}

/*
out:
	Enter last name: Frdeldumpkin
	Frdeldumpkin at 0x466ca8
	Enter last name: Pook
	Pook at 0x466c78
*/