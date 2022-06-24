#include <iostream>
#include<cmath>
using namespace std;

/*Создайте структуру, которая хранит время : часы, минуты, секунды.
Написать функцию, которая возвращает часы, минуты, секунды для
заданной переменной типа «время».*/

struct Time {
    int hours;
    int minute;
    int secunde;
};

void differencetime( int a) {
    float hours = a;
    float minute = hours * 60;
    float secunde = hours * 60 * 60;
    std::cout << "Hours = " << hours << std::endl;
    std::cout << "Min = " << minute << std::endl;
    std::cout << "Sec = " << secunde << std::endl;
}

int main()
{
    Time a;
    a.hours = 3;
    differencetime(a.hours);

	return 0;
}
