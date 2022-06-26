#include <iostream>
#include<cmath>
#include<array>
using namespace std;

/* Реализовать сложение, вычитание, умножение, транспонирование матриц
(разрешается фиксированный размер матриц).*/

void Matrix1() {
    const int cols = 4;
    const int rows = 4;
    int Amat[rows][cols];
    int Bmat[rows][cols];
    int Cmat[rows][cols];

    srand(0);
    cout << "Matrix1 " << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            Amat[i][j] = rand() % 50;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << Amat[i][j] << "\t";
        cout << endl;
    }
    
    srand(0);
    cout << "Matrix2 " << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            Bmat[i][j] = rand() % 50 - 25;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << Bmat[i][j] << "\t";
        cout << endl;
    }

    srand(0);
    cout << "sumMatrix " << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            Cmat[i][j] = Amat[i][j] + Bmat[i][j];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << Cmat[i][j] << "\t";
        cout << endl;
    }

    srand(0);
    cout << "vchMatrix " << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            Cmat[i][j] = Amat[i][j] - Bmat[i][j];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << Cmat[i][j] << "\t";
        cout << endl;
    }

    srand(0);
    cout << "prhMatrix " << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            Cmat[i][j] = Amat[i][j] * Bmat[i][j];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << Cmat[i][j] << "\t";
        cout << endl;
    }

}

int main() {
    
    Matrix1();

    return 0;
}
