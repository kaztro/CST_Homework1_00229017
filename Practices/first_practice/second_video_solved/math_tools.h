#include <vector>
using namespace std;

typedef vector<float> Vector;

typedef vector<Vector> Matrix;

//      Parte 1 - Vector
// //Zeroes para vectores
// void zeroes(Vector &v,int n){
//     for (int i = 0; i < n; i++)
//     {
//         v.push_back(0.0);
//     } 
// }

//Zeroes para matrices
void zeroes(Matrix &M,int n ){
    for (int i = 0; i < n; i++)
    {
        //Crea un vector con caracteristicas de : dimension,valor
        Vector row(n,0.0);
        M.push_back(row);
    } 
}