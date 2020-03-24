#include <vector>
using namespace std;

typedef vector<float> Vector;

typedef vector<Vector> Matrix;

//      Parte 1 - Vector
// //Zeroes para vectores
void zeroes(Vector &v,int n){
    for (int i = 0; i < n; i++)
    {
        v.push_back(0.0);
    } 
}

//Zeroes para matrices
void zeroes(Matrix &M,int n ){
    for (int i = 0; i < n; i++)
    {
        //Crea un vector con caracteristicas de : dimension,valor
        Vector row(n,0.0);
        M.push_back(row);
    } 
}


//Copiar Vector

void copyVector(Vector v ,Vector &copy){
    zeroes(copy,v.size());
    for (int i = 0; i < v.size(); i++)
    {
        copy.at(i) = v.at(i);
    }
    

}

//Copiar Matriz


void copyMatrix(Matrix A ,Matrix &copy){
    zeroes(copy,A.size());
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A.at(0).size(); j++)
        {
            copy.at(i).at(j) = A.at(i).at(j);
        }
        
    }
    

}

///Multiplicar un vector con una matriz

void productMatrixVector(Matrix A,Vector v,Vector &R){
    for (int fila = 0; fila < A.size(); fila++)
    {
        float cell=0.0;
        for (int col = 0; col <v.size() ; col++)
        {
            cell += A.at(fila).at(col) * v.at(col);

        }
        R.at(fila)+=cell;
    }
    
}