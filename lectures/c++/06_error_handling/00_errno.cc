#include <cmath>
#include <iostream>

int main() {
  double d = std::sqrt(4);
  std::cout << d << " " <<"error number: " <<errno << std::endl; //errno is the error number of this specific error

  d = std::sqrt(-4);
  std::cout << d << " " <<"error number: " << errno << std::endl;


  errno=0;

  return 0;
}
