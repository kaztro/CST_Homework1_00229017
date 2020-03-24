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
    // Matrix example_matrix;

    //inicializar matriz
    // zeroes(example_matrix,2);

    // example_matrix.at(0).at(0) = 1;example_matrix.at(0).at(1) = 2;
    // example_matrix.at(1).at(0) = 3;example_matrix.at(1).at(1) = 4;

    // showMatrix(example_matrix);

    // //Matriz 3x3
    // Matrix example_matrix2;

    // zeroes(example_matrix2,3);

    // example_matrix2.at(0).at(0) = 1;example_matrix2.at(0).at(1) = 2;example_matrix2.at(0).at(2) = 3;
    // example_matrix2.at(1).at(0) = 4;example_matrix2.at(1).at(1) = 5;example_matrix2.at(1).at(2) = 6;
    // example_matrix2.at(2).at(0) = 7;example_matrix2.at(2).at(1) = 8;example_matrix2.at(2).at(2) = 9;

    // showMatrix(example_matrix2);


    // Vector example_vector,copy_vector;

    // zeroes(example_vector,4);

    // example_vector.at(0)=3;
    // example_vector.at(1)=6;
    // example_vector.at(2)=9;
    // example_vector.at(3)=12;
    
    // copyVector(example_vector,copy_vector);
    // showVector(copy_vector);


    //Multiplicacion vector matriz

    Vector example_vector,answer_vector;
    Matrix example_matrix;

    zeroes(example_vector,3);

    example_vector.at(0)=2;
    example_vector.at(1)=2;
    example_vector.at(2)=2;

    zeroes(example_matrix,3);

    example_matrix.at(0).at(0) =1 ;example_matrix.at(0).at(1) =1 ;example_matrix.at(0).at(2) =1 ;
    example_matrix.at(1).at(0) =1 ;example_matrix.at(1).at(1) =1 ;example_matrix.at(1).at(2) =1 ;
    example_matrix.at(2).at(0) =1 ;example_matrix.at(2).at(1) =1 ;example_matrix.at(2).at(2) =1 ;

    zeroes(answer_vector,3);

    productMatrixVector(example_matrix,example_vector,answer_vector);

    showVector(answer_vector);

    return 0;
}