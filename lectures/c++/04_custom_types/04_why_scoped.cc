#include <iostream>

enum month { jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };

using namespace std;    //using::cout; and using std::endl; are recommended instead of this expression

int main() {
  cout << nov << endl;
  // cout << dec << endl; // dec is ambiguous, std::ios_base somethingelse so using namespace std; cause this problem

  return 0;
}
