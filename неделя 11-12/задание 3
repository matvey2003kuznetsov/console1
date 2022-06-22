#include <iostream>
#include<cmath>
using namespace std;


/*Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести
данные о самом тяжёлом роботе.*/

struct Robot {
    float gab; //габариты
    float ves; //вес
    float maxsk; //макс скорость
}R1,R2,R3;

void heavy(Robot a, float x){
    if (a.ves >= x) {
        std::cout << "Gabarit=" << "\t" << a.gab << " D * V * SH ,";
        std::cout << "Massa=" << "\t" << a.ves << " kg ,";
        std::cout << "Max speed=" << "\t" << a.maxsk << "M/C";

    }
}


int main()
{
    Robot R1, R2, R3;

    R1.gab = 1;
    R1.ves = 200;
    R1.maxsk = 65;

    R2.gab = 1.5;
    R2.ves = 150;
    R2.maxsk = 100;

    R3.gab = 1.7;
    R3.ves = 175;
    R3.maxsk = 80;

    heavy(R1, 200);


	return 0;
}
