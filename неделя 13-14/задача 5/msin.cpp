#include <iostream>
#include<cmath>
#include<array>
using namespace std;

/* Вычислить произведение отрицательных/положительных элементов массива */

void task(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        nums[i] = rand() % 50 - 25;
        std::cout << nums[i] << endl;
    }
}


int otsum(int nums[], int n) {

    int  otsum = 0;
    for (int i = 0; i < n; i++)
        if (nums[i] < 0)
            otsum += nums[i];
            std::cout << "otsum- " << otsum << std::endl;
    return otsum;

}

int sum(int nums[], int n) {

    int  sum = 0;
    for (int i = 0; i < n; i++)
        if (nums[i] > 0)
            sum += nums[i];
    std::cout << "sum- " <<sum << std::endl;
    return sum;

}

int main() {
    const int n = 10;
    int arr[n];

    task(arr, n);

    otsum(arr, n);
    sum(arr, n);

    return 0;
}
