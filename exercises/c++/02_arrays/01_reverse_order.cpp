#include <iostream>

template <typename T>
T* array_create(std::size_t n) {
    T* array = new T[n];
    std::cout << "Please enter elements of array respectively\n"; 
    for (std::size_t i = 0; i < n; i++){
        std::cout << "array[" << i << "]:" ;
        std::cin >> array[i];
    }
    return array;
}

template <typename T>
void print_reversed_array(T * array, std::size_t n){
    for(int i  = n-1 ; i >= 0; i--)
        std::cout << array[i] << "\n";
}


int main(){
    std::size_t n ;
    std::cout << "Please enter the size of array: ";
    std::cin >> n;
    auto *array = array_create<int>(n);
    std::cout << "Reverse of this array\n";
    print_reversed_array<int>(array,n);
    delete[] array;
    return 0;  
}
