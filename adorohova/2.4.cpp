#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Rus");
int x, y;
cout � "������� ����� x : "; cin � x;
if (x <= -3) {
y = -x * x - 1,1*x + 9;
cout � "-x*x-1.1x+9 = " � y � endl;

}
else {
y = (log(x + 3)) / (x * x + 9);
cout � "(ln(x+3)) / (x*x+9)= " � y � endl;
}

system("PAUSE");
return 0;
}