#include <iostream>
#include <cmath>

int main(){
    
    std::cout << "This program finds prime numbers up to entered integer by using Sieve of Eratosthenes algorithm\n";
    std::cout << "Insert an integer: ";

    std::size_t n;
    std::cin >> n;

    bool prime_array[n+1];

    for(int i = 0 ; i < n ; i++)
        prime_array[i] = true;            //initially all set to true

    for(int i = 2; i <= std::sqrt(n) ; i++)
    {
        if(prime_array[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
                prime_array[j] = false;
            
        }
    }
    std::cout << "Prime numbers up to " << n << ":\n";
    for(int i = 2; i<=n; i++)
        if(prime_array[i])
            std::cout << i << "\n";    

}

