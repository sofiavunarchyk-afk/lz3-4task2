#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a = 0.0, b = 5.0;  // відрізок [0;5]
    int k;
    cout << "Введіть кількість кроків k: ";
    cin >> k;

    double h = (b - a) / k;

    cout << "Таблиця значень функції y = sin(x^2 + 4)" << endl;
    cout << "--------------------------------------" << endl;
    cout << "   x\t\t   y" << endl;
    cout << "--------------------------------------" << endl;

    for (int i = 0; i <= k; i++) {
        double x = a + i * h;
        double y = sin(x * x + 4);
        cout << x << "\t" << y << endl;
    }

    return 0;
}
