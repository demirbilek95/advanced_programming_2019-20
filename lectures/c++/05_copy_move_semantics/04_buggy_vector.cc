#include <iostream>

template <typename T>
class Vector {
  T* elem;
  std::size_t _size;

 public:
  explicit Vector(const std::size_t length)     // You can only assign values that match the values of the class type.
      : elem{new T[length]{}}, _size{length} {}

  ~Vector() { delete[] elem; }

  const T& operator[](const std::size_t& i) const { return elem[i]; }
  T& operator[](const std::size_t& i) { return elem[i]; }

  std::size_t size() const { return _size; }

  // range-for
  const T* begin() const { return elem; }		
  T* begin() { return elem; }

  const T* end() const { return elem + size(); }
  T* end() { return elem + size(); }
};

void print(const Vector<int>& v){
	for(auto x :v){
	std::cout << x < std::endl;
}}
int main() {
  Vector<int> v1{3};
  v1[0] = 1;
  v1[1] = 2;
  v1[2] = 3;


//{

//auto it = v1.begin();    // this part is  equivalent to   for (const auto x : v1)
//auto stop = v1.end();
//for(; it!=stop; ++it)

	//{
//		const auto x = *it
//		std::cout << x << std::endl;
//	}

}

  std::cout << "v1: ";
  for (const auto x : v1)   //c++ 11 has auto, this requires a begin and end function 
    std::cout << x << " ";
  std::cout << std::endl;

  Vector<int> v2{v1};  // default copy constructor

  std::cout << "v2 after default copy ctor: ";
  for (const auto x : v2)
    std::cout << x << " ";
  std::cout << std::endl;

  v1[0] = 99;

  std::cout << "v2 after v1 has been changed: ";
  for (const auto x : v2)
    std::cout << x << " ";
  std::cout << std::endl;

  v2[1] = -999;

  std::cout << "v1 after v2 has been changed: ";
  for (const auto x : v1)
    std::cout << x << " ";
  std::cout << std::endl;

  return 0;
}
