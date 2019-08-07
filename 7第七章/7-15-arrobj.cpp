#include <iostream>
#include <array>
#include <string>

const int Seaseons = 4;
const std::array<std::string, Seaseons> Snames = 
{"Spring", "Summer","Fall","Winter"};

void fill(std::arr<double, Seaseons> *pa);
void show(std::array<double,Seaseons> da);


int main(){
	std::array<double,Seaseons> expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}

void fill(std::array<double, Seaseons>* pa){
	using namespace std;
	for (unsigned int i = 0; i<Seaseons; i++){
		cout << "Enter "<<Snames[i]<<" expenses:";
		cin>>(*pa)[i];
	}
}

void show(std::array<double,Seaseons> da){
	using namespace std;
	double total = 0.0;
}