#include <iostream>

void get_int();


int main() {
	get_int();
}

void get_int() {
	int i;
	std::cout << "Enter an integer number\n";
	std::cin >> i;
	while(1){
		if(std::cin.fail()){
			std::cin.clear();
			std::cin.ignore();
			std::cout << "You entered wrong input" << std::endl;
			std::cin >> i;
	}
		else{
			std::cout << "Your input is integer" << std::endl;
			break;
	}
}
}


