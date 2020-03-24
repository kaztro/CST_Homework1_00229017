#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

int main(void){
    //Parte 1 - Vector
    // Vector zeroes_vector;
    // zeroes(zeroes_vector,5);
    // showVector(zeroes_vector);
     
    //Parte 2 Matriz
    // Matrix zeroes_Matrix;
    // zeroes(zeroes_Matrix, 5);
    // showMatrix(zeroes_Matrix);

    //Ejemplo de Matriz 2x2 
    Matrix example_matrix;

    //inicializar matriz
    zeroes(example_matrix,2);

    example_matrix.at(0).at(0) = 1;example_matrix.at(0).at(1) = 2;
    example_matrix.at(1).at(0) = 3;example_matrix.at(1).at(1) = 4;

    showMatrix(example_matrix);

    //Matriz 3x3
    Matrix example_matrix2;

    zeroes(example_matrix2,3);

    example_matrix2.at(0).at(0) = 1;example_matrix2.at(0).at(1) = 2;example_matrix2.at(0).at(2) = 3;
    example_matrix2.at(1).at(0) = 4;example_matrix2.at(1).at(1) = 5;example_matrix2.at(1).at(2) = 6;
    example_matrix2.at(2).at(0) = 7;example_matrix2.at(2).at(1) = 8;example_matrix2.at(2).at(2) = 9;

    showMatrix(example_matrix2);
    return 0;
}