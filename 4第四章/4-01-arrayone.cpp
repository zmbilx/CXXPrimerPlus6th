#include <iostream>

int main(){
	using namespace std;
	int yams[3];		//yams 山药
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;
	
	int yamscost[3] = {20,30,5};
	
	cout<<"Total yams = ";
	cout<<yams[0] + yams[1] + yams[2]<<endl;
	cout<<"The package with "<<yams[1]<<"yams cost "<<endl;
	cout<< yamscost[1] << "cents per yams."<<endl;
	
	int total = yams[0]*yamscost[0] + yams[1]*yamscost[1];
	total += yams[2]*yamscost[2];
	cout<<"The total yams expense is "<<total<<" cents."<<endl;
	
	cout<<"Size of yams array = "<< sizeof yams;
	cout<<" bytes.\n";
	cout<<"Size of one element = "<<sizeof(yams[0]);
	cout<<" bytes.\n";
	return 0;
}

/*
output:
	Total yams = 21
	The package with 8yams cost 
	30cents per yams.
	The total yams expense is 410 cents.
	Size of yams array = 12 bytes.
	Size of one element = 4 bytes.
*/