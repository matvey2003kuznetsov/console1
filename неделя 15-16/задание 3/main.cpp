#include <iostream>
#include<cmath>
#include<array>
using namespace std;

/* Дана матрица. Элементы первой строки — количество осадков в соответствующий
день, второй строки — сила ветра в этот день. Найти, был ли в эти дни ураган?
(ураган — когда самый сильный ветер был в самый дождливый день)*/

void Matrix() {
    const int rows = 2;
    const int cols = 4;
    int mat[rows][cols];
    

    srand(0);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat[i][j] = rand() % 50 ;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    int max = mat[0][0];
    int mr = 0, mc = 0;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (mat[i][j] > max) {
                max = mat[i][j];
                mr = i;
                mc = j;
                if (mat[mr][max] == mat[max][mc])
                    cout << " DA " << endl;
                else
                    cout << " NET " << endl;
                
            }
}
   

int main() {

    Matrix();

    return 0;
}
