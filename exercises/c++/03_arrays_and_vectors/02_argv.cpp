#include <iostream>
#include <array>
#include <vector>
#include <sstream>

template<class t>
void transpose(const t matrix, int row, int column)
{
    std::cout << "Matrix:" << std::endl;

    for(int i = 0; i<row; ++i) {
        for(int j = 0; j<column; ++j)
            std::cout << matrix[i*column+j] << " ";
            std::cout << "\n";
  }

    std::cout << "\nTranspose of the matrix: \n";

    t matrix_transpose = matrix;;

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

int main(int argc, char *argv[]){

    std::size_t row, column;
    if(argc >= 2) 
    {
    std::istringstream  r{argv[1]}, c{argv[2]};
    r >> row;
    c >> column;
    }

    //const int row = 2;
    //const int column = 5;
    //const int N = row * column;

    std::vector<int> matrix;				// I had to use vector because std::array doesn't support dynamic allocation I got "the value of ‘N’ is not usable in a constant expression" error
    for(auto i = 0; i <row*column; ++i){
        matrix.push_back(i);
    }

    transpose(matrix, row, column);

    return 0;
}
