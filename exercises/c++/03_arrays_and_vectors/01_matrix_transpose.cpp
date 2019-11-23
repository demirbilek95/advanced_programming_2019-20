#include <iostream>
#include <array>

template<typename T, size_t N>
void transpose(std::array<T,N> matrix, int row, int column)
{
    std::cout << "Matrix:" << std::endl;

    for(int i = 0; i<row; ++i) {
        for(int j = 0; j<column; ++j)
            std::cout << matrix[i*column+j] << " ";
            std::cout << "\n";
  }

    std::cout << "\nTranspose of the matrix: \n";

    std::array<int,N> matrix_transpose;

    for(int k = 0; k < row ; k++){
        for(int l = 0; l < column ; l++)
            //std::cout << "k :" <<  k << " l: " <<  l << std::endl;
            matrix_transpose[l*row+k] = matrix[k*column+l]; 
  }

    for(int i = 0; i<column; ++i) {
        for(int j = 0; j<row; ++j)
        std::cout << matrix_transpose[i*row+j] << " ";
        std::cout << "\n";
  }

}

int main(){

    const int row = 2;
    const int column = 5;
    const int N = row * column;
    std::array<int,N> matrix{1,2,3,4,5,6,7,8,9,10};

    transpose(matrix, row, column);
    return 0;
}
