#include <iostream>
#include <conio.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
int i,n;
unsigned int y;
y = 1;
cout « "Âåäèòå ÷èñëî n =";
cin » n;
for(i=1; i<=n; i++)
{
y = y * (2 * i);
cout « "y(" « i « ")=" « 2*i « " ";
}
cout « endl;
cout « "F(" « n « ")= " « y « endl;
system("pause");
return 0;
}