#include "math.h"
#include "iostream"
using namespace std;

int main()
{
const double pi = 3.1415926535897932384626;
double a, b, c, alpha, betha, gama;
setlocale(0, "");
cout Ђ "¬ведите сторону а: ";
cin ї a;
cout Ђ "¬ведите сторону b: ";
cin ї b;
cout Ђ "¬ведите сторону c: ";
cin ї c;
if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
{
//следу€ с теоремы косинусов
alpha = acos(-(a * a - b * b - c * c) / (2 * b * c));
betha = acos(-(b * b - a * a - c * c) / (2 * a * c));
gama = acos(-(c * c - a * a - b * b) / (2 * a * b));
cout Ђ "угол альфа в радианах: " Ђ alpha Ђ " в градусах: " Ђ (alpha * 180 / pi) Ђ endl;
cout Ђ "угол бета в радианах: " Ђ betha Ђ " в градусах: " Ђ (betha * 180 / pi) Ђ endl;
cout Ђ "угол гама в радианах: " Ђ gama Ђ " в градусах: " Ђ (gama * 180 / pi) Ђ endl;
}
else
{
cout Ђ "“реугольник не существует!!!" Ђ endl;
}
system("pause");
}
