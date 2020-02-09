#include <iostream>

const int ArSize = 8;
int sum_arr(int arr[], int n);

int main(){
	int cookies[ArSize] = {1,2,4,8,16,32,64,128};
	std::cout << cookies << " = array address,";
	
	std::cout << sizeof cookies << " = sizeof cookies\n";
	
	int sum = sum_arr(cookies, ArSize);
	std::cout << "Total cookies eaten: " << sum << std::endl;
	
	sum = sum_arr(cookies, 3);
	std::cout << "First three eaters ate "<< sum << " cookies.\n";
	
	sum = sum_arr(cookies+4, 4);
	std::cout << "Last for eaters ate " << sum << " cookies.\n";
	return 0;
}

int sum_arr(int arr[], int n){
	int total = 0;
	std::cout << arr << " = arr, ";
	std::cout << sizeof arr << " = sizeof arr\n";
	for (int i = 0; i < n; i++){
		total += arr[i];
	}
	return total;
}

/*
out:
	0x29fefc = array address,32 = sizeof cookies
	0x29fefc = arr, 4 = sizeof arr
	Total cookies eaten: 255
	0x29fefc = arr, 4 = sizeof arr
	First three eaters ate 7 cookies.
	0x29ff0c = arr, 4 = sizeof arr
	Last for eaters ate 240 cookies.
*/