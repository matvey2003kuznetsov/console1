#include <iostream>
#include<cmath>
#include<array>
using namespace std;

/* В квадратной матрице, найти сумму отрицательных элементов, лежащих на главной
диагонали.*/

void Matrix() {
    const int rows = 4;
    const int cols = 4;
    int mat[rows][cols];

    srand(0);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat[i][j] = rand() % 50-25;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
     
    int sum = 0;
    for (int i = 0; i < rows; i++)
        for (int j = i; j == i; j++)
            if (mat[i][j] < 0)
                sum += mat[i][j];
    cout << sum << endl;
}

int main() {

    Matrix();

    return 0;
}
