#include <iostream>

int main() {

	int x;
	std::cout << "This programs convert pounds to kilograms!\nPlease enter an integer " << std::endl;
	std::cin >> x;	
	std::cout << x << " pounds are ";	
	
	double kg_convert = x * 0.4545;

	std::cout << kg_convert << " kilograms. " << std::endl;
	
	return 0;


}
