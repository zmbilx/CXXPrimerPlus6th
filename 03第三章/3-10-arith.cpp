#include <iostream>

int main(){
	using namespace std;
	float hats,heads;
	
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout<<"Enter a number:";
	cin>> hats;
	cout<<"Enther another number:";
	cin>> heads;
	
	cout<<"hats = "<< hats <<"; heads = " << heads <<endl;
	cout << "hats + heads = "<< hats + heads  << endl;
	cout << "hats - heads = "<<hats - heads << endl;
	cout << "hats * heads = "<<hats * heads <<endl;
	cout << "hats / heads = "<<hats/heads << endl;
	
	return 0;
}

/*
output:
	Enter a number:50.25
	Enther another number:11.17
	hats = 50.250000; heads = 11.170000
	hats + heads = 61.419998
	hats - heads = 39.080002
	hats * heads = 561.292480
	hats / heads = 4.498657
*/