#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main(){


std::ifstream file;
file.open("temperatures.txt");

if (!file) {
    std::cerr << "Unable to open file";
    exit(1);   // call system to stop
}

std::vector<double> temps;
double temp;

while(file >> temp)
    temps.push_back(temp);

std::sort( temps.begin(), temps.end() );

double sum; 

for(const auto i:temps){
    //std::cout << i << "\n";
    sum += i;
}

std::cout << "Mean of temperature is " << sum / temps.size() << std::endl;

if(temps.size() % 2 == 1){
	
	int index = (temps.size() +1 ) / 2;
	std::cout << "Median of temperatures is " << temps[index] << std::endl;
}
else {

	double index = (temps.size() + 1) / 2;
	std::cout << "Median of temperature is " << (temps[index-0.5] + temps[index+0.5]) / 2  << std::endl;

}


}
