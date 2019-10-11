#include <iostream>

int main(){
	int primes[100];
	int array_100[100];
	for (std::size_t i{2}; i <= 100; ++i){
    		array_100[i] = i;
		//std::cout << array_100[i]<<'\n';
		}
	
	  for (std::size_t k{2}; k < 100; ++k){
		//std::cout << array_100[k] << std::endl;
		int n{2};
		while(n<100){
			
			if(array_100[k] % n == 0)
				break;

			if(array_100[k] % n != 0)
							
			}		
		}

	return 0;
		
}
