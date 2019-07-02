#include <iostream>

void simple(); 		// function prototype(原型)

int main(){
	using namespace std;
	cout << "main() will call the simple() function:\n";
	simple();
	
	cout << "main() is finished with the simple function.\n";
	return 0;
}

void simple()
{
	using namespace std;
	cout << "I'm but a simple function.\n";
}

/*
output:
	main() will call the simple() function:
	I'm but a simple function.
	main() is finished with the simple function.
*/