#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Rus");
int x, y;
cout Ђ "¬ведите число x : "; cin ї x;
if (x <= -3) {
y = -x * x - 1,1*x + 9;
cout Ђ "-x*x-1.1x+9 = " Ђ y Ђ endl;

}
else {
y = (log(x + 3)) / (x * x + 9);
cout Ђ "(ln(x+3)) / (x*x+9)= " Ђ y Ђ endl;
}

system("PAUSE");
return 0;
}