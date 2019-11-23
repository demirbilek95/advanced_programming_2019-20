#include <iostream>

void get_double();


int main() {
	get_double();
}

void get_double() {
	double i;
	std::cout << "Enter an double number\n";
	//std::cin >> i;
	while(!(std::cin >> i)){
		if(std::cin.fail()){
			std::cin.clear();
			std::cin.ignore();
			std::cout << "You entered wrong input" << std::endl;
			std::cin >> i;
	}
		else{
			std::cout << "Your input is double" << std::endl;
			break;
	}
}
}


