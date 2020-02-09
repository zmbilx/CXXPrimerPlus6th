#include <iostream>

void simon(int);

int main(){
	using namespace std;
	simon(3);
	cout<<"Pick an interger:";
	int count;
	cin >> count;
	simon(count);
	cout<<"Done!"<<endl;
	return 0;
}

void simon(int n){
	using namespace std;
	cout<<"simon says touch your toes "<<n<<" times."<<endl;
}
/*
output:
	simon says touch your toes 3 times.
	Pick an interger:512
	simon says touch your toes 512 times.
	Done!
*/