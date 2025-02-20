#include <iostream>

struct Base {
  Base() { std::cout << "Base\n"; }
  virtual ~Base() { std::cout << "~Base\n"; }
};

struct Derived : public Base {
  Derived() { std::cout << "Derived\n"; }
  ~Derived() { std::cout << "~Derived\n"; }
};

int main() {
  { Derived d; }

  std::cout << "\n\npointers\n";
  Base* p = new Derived;
  delete p;

  return 0;
}

//first construct then destructer later, polymorphisism works with pointers and reference
