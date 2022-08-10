

#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    double eps;
    int n = 1;
    double N, a , Sum;
    Sum = 0.0;
    a = 0.0;
    N = 1.0;

    cout << "Введите вещественное eps>0 " << endl;
    cin >> eps;
    while (a < eps) {
        N = N * n;
        a = pow(10, n)/(N);
        Sum += a;
        n = n + 1;
    }
    cout << "Сумма ряда,вычисленная с заданной точностью  =  " << Sum << endl;
    system("pause");
    return 0;
}

