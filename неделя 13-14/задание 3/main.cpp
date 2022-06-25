#include <iostream>
#include<cmath>
#include<array>
using namespace std;

/*Вывести элементы массива, меньших среднего арифметического

*/

void task(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        nums[i] = rand() % 11;
        std::cout << nums[i] << endl;
    }
}

int sr(int nums[], int n){

    int sum = 0;
    float sr = 0;
    for (int i = 0; i < n; i++)
        sum += nums[i];
    sr = sum % n;
    return sr;

}
int element(int nums[], int n, int sr) {

    int  element = 0;
    for (int i = 0; i < n; i++)
        if (nums[i] < sr)
            std::cout << "element- " << nums[i] << std::endl;
    return element;

}

int main() {
    const int n = 10;
    int arr[n];

    task(arr, n);
  
    std::cout << "sr- " << sr(arr, n) << std::endl;

    element(arr, n, 5);

    return 0;
}
