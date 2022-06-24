#include <iostream>
#include<cmath>
#include<array>
using namespace std;

/*Сгенерировать массив со случайными числами в диапазоне: [0,10]
*/

void task() {
    array < int, 10 > nums;
    for (int i = 0; i < 10; i++) {
        nums[i] = rand() % 11;
        std::cout << nums[i] << endl;
    }
}

int main()
{
    task();
    return 0;
}
