// laba 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;


int main()
{
    int N;
    float cubs, geom, x_1, y_1,x,y;
    bool there = true;
    double A, B;
    double X, Y, result;
    float   x, y;

    cout << " Enter X: " << endl;
    cin >> X;
    cout << " Enter Y: " << endl;
    cin >> Y;
    result = (3 + exp(Y - 1)) / (1 + pow(X, 2) * abs(Y - tan(X)));
    cout << "Result is " << result << endl;

    cout << " Enter a:" << endl;
    cin >> A;
    cout << "Enter b:" << endl;
    cin >> B;
    cubs = (pow(A,3)+pow(B,3))/2;
    cout << "Cubs is " << cubs << endl;
    geom = (abs(A)*abs(B))/2;
    cout << "Geom is  " << geom << endl;

    cout << "Enter N: " << endl;
    cin >> N;
    if (N % 2 == 0 && N > 10)
    {
        cout << "4otnoe i dvuzna4noe" << endl;
    }
    else
    {
        cout << "ne 4otnoe ili ne dvuhzna4noe" << endl;
    }

    cout << "Enter x_1: " << endl;
    cin >> x_1;
    cout << "Enter y_1: " << endl;
    cin >> y_1;

    cout << "Enter x: " << endl;
    cin >> x;
    cout << "Enter y: " << endl;
    cin >> y;

    if ((x >= 0 && y <= 4) && (x * x + y * y <= 16)) {
        cout << "True" << endl;
    }

    else if ((y <= 0) && (x >= 0) && (x * x + y * y <= 25)) {
        cout << "True" << endl;
    }

    else {
        cout << "False" << endl;
    }
    return 0;
}
   

