#include <iostream>
#include <locale.h>
#include <conio.h>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
double y, a, b, h;
cout « "Âגוהטעו a, b ט h קונוח ןנמבוכ: " ;
cin » a » b » h;
cout « "a=" «a« " b=" « b« " h=" « h « endl;
do
{
y = (sin(a)* sin(a)) - cos(2 * a);
cout « "x=" « a « " F(x) =" « y « endl;
a = a + h;
}
while (a <= b);
system("pause");
return 0;
} 