#include <iostream>
#include <string>
#include <locale.h>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
int m, n = 0;
cout « "Введите номер единицы измерения (1; 2; 3; 4; 5): ";
cin » n;
cout « "Введите массу (М): ";
cin » m;
if (n == 1)
{
cout « "Единица измерения килограммы." « endl;
cout « "Масса М= " « m « " кг. " « endl;
}
if (n == 2)
{
cout « "Единица измерения миллиграммы." « endl;
cout « "Масса М= " « m* 0.000001 « " кг. " « endl;
}
if (n == 3)
{
cout « "Единица измерения граммы" « endl;
cout « "Масса М= " « m * 0.001 « " кг. " « endl;
}
if (n == 4)
{
cout « "Единица измерения тонны." « endl;
cout « "Масса М= " « m * 1000 « " кг. " « endl;
}

if (n == 5)
{
cout « "Единица измерения центнер." « endl;
cout « "Масса М= " « m * 100 « " кг. " « endl;
}
system("pause");
return 0;
}