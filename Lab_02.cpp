// Lab_02.cpp
// < Тарабас Максим >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 26

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double alpha; // вхідний параметр
    // double z1; // результат обчислення 1-го виразу
    double z2; // результат обчислення 2-го виразу

    cout << "alpha = "; cin >> alpha;

    // z1 = cos(alpha) + cos(2 * alpha) + cos(6 * alpha) + cos(7 * alpha);    
    z2 = 4 * cos(alpha / 2) * cos(5 * alpha / 2) * cos(4 * alpha);
        
    cout << endl;
    // cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}