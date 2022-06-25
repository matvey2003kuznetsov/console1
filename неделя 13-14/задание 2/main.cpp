#include <iostream>
#include<cmath>
#include<array>
using namespace std;

/*Сгенерировать массив со случайными числами в диапазоне: [0,10]
*/

void task(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        nums[i] = rand() % 11;
        std::cout << nums[i] << endl;
    }
}

int sum1(int nums[], int n, int b){

    int sum1 = 0;
    for (int i = 0; i < n; i++)
        if (nums[i] < b)
        sum1 += nums[i];
    return sum1;

}
int sum2(int nums[], int n, int b) {

    int sum2 = 0;
    for (int i = 0; i < n; i++)
        if (nums[i] > b)
        sum2 += nums[i];
    return sum2;

}
int sum3(int nums[], int n, int b) {

    int sum3 = 0;
    for (int i = 0; i < n; i++)
        if (nums[i] < b)
        sum3 += nums[i];
    return sum3;

}
int main() {
    const int n = 10;
    int arr[n];

    task(arr, n);

    std::cout << "sum1-" << sum1(arr, n, 5) << std::endl;
    std::cout << "sum2-" << sum1(arr, n, 9) << std::endl;
    std::cout << "sum3-" << sum1(arr, n, 4) << std::endl;
    return 0;
}
