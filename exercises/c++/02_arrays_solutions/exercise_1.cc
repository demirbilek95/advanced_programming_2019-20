#include <iostream>
using namespace std;
 
int main () {
   int i, j;
   int size = 0;
   int primes[100];  // I prefer using one big array because it is easy to implement.
   
   for(i = 2; i<100; i++) {
      for(j = 2; j <= (i/j); j++)
         if(!(i%j)) break; // if factor found, not prime
         if(j > (i/j)) {
		primes[size] = i;
		size++;
		//cout << i << " is prime\n";
		}
   }

	for(auto v:primes) cout << v << endl;
   
   return 0;
}
