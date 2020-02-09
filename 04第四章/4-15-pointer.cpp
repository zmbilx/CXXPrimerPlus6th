#include <iostream>

int main(){
	using namespace std;
	int updates = 6;
	int *p_updates;
	p_updates = &updates;
	
	cout<<"Values: updates =" << updates;
	cout<<", *p_updates = "<<*p_updates<<endl;
	
	cout<<"Values: updates = "<<updates;
	cout<<", *p_updates = "<<*p_updates<<endl;
	
	cout<<"Adress: &updates = "<<&updates;
	cout<<", p_updates = "<< updates <<endl;
	return 0;
}

/*
output:
	Values: updates =6, *p_updates = 6
	Values: updates = 6, *p_updates = 6
	Adress: &updates = 0x60ff08, p_updates = 6
*/