#include <iostream>

using namespace std;

int main()
{
    float storona, ygol, radiys;
    cout << "Kolichestvo storon: ";
    cin >> storona;
    cout << "kolichestvo yglov: ";
    cin >> ygol;
    cout << "Dlina radiysa: ";
    cin >> radiys;
    float P = storona * ygol;
    float S = 1 / 2 * storona * ygol * radiys;
    if (S==0 || storona == 0 || radiys == 0) {
        cout << "Ploshad" << S << endl
            << "Perimiter" << P << endl;
    }
    return 0;
}
