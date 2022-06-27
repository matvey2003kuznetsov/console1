#include <iostream>

using namespace std;

int main()
{
    //Пользователь вводит число.Выведите на экран квадрат этого числа, куб этого
   // числа.
    float a;
    cout << " chislo: ";
    cin >> a;
    float cvadrat = a * a;
    float kyb = a * a * a;
    cout << cvadrat << endl
        << kyb << endl;

    return 0;
}
