#include <iostream>

struct inflatable		// 游艇
{
	char name[20];
	float volum;	// 容量
	double price;	// 价格
};

int main(){
	using namespace std;
	
	inflatable guest={
		"Glorious Gloria",		// name value_comp
		1.88,					// volum value
		29.99					// price value
	};
	
	inflatable pal={
		"Aduacious Arthur",
		3.12,
		32.99
	};		// pal is second variable of type inflatable
	
	cout<<"Expand your guest list with "<<guest.name;
	cout<<" and "<<pal.name<<"!\n";
	
	cout<<"You can have both for $";
	cout<<guest.price + pal.price<<"!\n";
	
	return 0;
}

/*
output:
	Expand your guest list with Glorious Gloria and Aduacious Arthur!
	You can have both for $62.98!
*/