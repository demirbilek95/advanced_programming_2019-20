#include <iostream>

void swap(int a, int b);

int main() {
  int x{3}, y{7};
  std::cout << "before\t" << x << " " << y << std::endl;
  swap(x, y);
  std::cout << "after\t" << x << " " << y << std::endl;
  return 0;
}

void swap(int a, int b) {
  int t{a};
  a = b;
  b = t;
  

}

//	stack, heap (free memory), function and swap function has different places that is why when we change it from function we can not change from the if you write inside of function it should work
