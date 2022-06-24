#include <iostream>
#include<cmath>
using namespace std;

/*. Робот-самолёт описывается как структура с полями: скорость вращения винта,
радиус винта, коэффициент тяги. Напишите функцию для расчёта тяги,
создаваемую винтом (произведение всех характеристик).*/

struct AirBus {
    float v; // Скорость вращения винта 
    float r; // радиус вращения винта
    float k; // Коэфицент тяги
}A1;

void koffisent(AirBus a) {

    float s = a.v * a.r * a.k;
    std::cout << "K.t = " << s << " H ,"
        << a.v << "ob/s  ,"
        << a.r << "m  ,"
        << a.k << "H ";

}

int main()
{

    AirBus A;

    A1.v = 10;
    A1.r = 1;
    A1.k = 20;

    koffisent(A1);

    return 0;

}
