#include <iostream>

int stonetold(int);

int main(){
	using namespace std;
	int stone;
	cout<<"Enter the weight int stone:";
	cin>>stone;
	int pounds = stonetold(stone);
	cout<<stone<<" stone = ";
	cout<< pounds <<" pounds."<<endl;
	return 0;
}

int stonetold(int sts){
	return 14*sts;
}

/*
output:
	Enter the weight int stone:15
	15 stone = 210 pounds.
*/