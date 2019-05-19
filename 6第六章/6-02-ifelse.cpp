#include <iostream>

int main(){
	char ch;
	std::cout << "Type, and I shall repeat.\n";
	std::cin.get(ch);
	
	while (ch != '.'){
		if (ch == '\n')
			std::cout<<ch;
		else
			std::cout<< ++ch;
		std::cin.get(ch);
	}
	
	std::cout << "\n Please excuse the slight confusion.\n";
	
	return 0;
}

/*
out:
	Type, and I shall repeat.
	An ineffable joy suffused me as I beheld
	Bo!jofggbcmf!kpz!tvggvtfe!nf!bt!J!cfifme
	The wonders of modern computing.
	Uif!xpoefst!pg!npefso!dpnqvujoh
	 Please excuse the slight confusion.
*/