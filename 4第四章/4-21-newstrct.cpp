#include <iostream>

struct inflatable{
	char name[20];
	float volume;
	double price;
};


int main(){
	using namespace std;
	inflatable* ps = new inflatable;
	cout << "Enter name of inflatable item:";
	// 这里是最多获取20个字符
	cin.get(ps->name, 20);
	cout<<"Enetr volume in cubic feet: ";
	cin >> (*ps).volume;
	cout<<"Enter price: $";
	cin >> ps->price;
	cout << "Name: "<<(*ps).name<<endl;
	cout << "Volume: "<<ps->volume<<"cubic feet.\n";
	cout << "Price: $"<<ps->price<<endl;
	delete ps;		// free memory used by structure
	return 0;
}

/*
out:
	Enter name of inflatable item:Fabulous Frodo
	Enetr volume in cubic feet: 1.4
	Enter price: $27.99
	Name: Fabulous Frodo
	Volume: 1.4cubic feet.
	Price: $27.99
*/


