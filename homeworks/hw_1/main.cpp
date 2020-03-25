#include <iostream>
#include "math_tools.h"
#include "display_tools.h"
/*El codigo base (de math_tools.h y display_tools.h) se tomo de https://github.com/Sortweste/-TSC-Laboratorio1*/
int main() {
    Matrix m1, inverseM;

    zeroes(m1, 3);

    m1.at(0).at(0) = 2;
    m1.at(0).at(1) = 2;
    m1.at(0).at(2) = 3;
    m1.at(1).at(0) = 4;
    m1.at(1).at(1) = 5;
    m1.at(1).at(2) = 6;
    m1.at(2).at(0) = 7;
    m1.at(2).at(1) = 8;
    m1.at(2).at(2) = 9;

    inverseMatrix(m1, inverseM);

    showMatrix(inverseM);
}