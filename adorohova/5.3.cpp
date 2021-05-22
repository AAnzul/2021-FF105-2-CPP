
#include <iostream>
#include <string>
#include <conio.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
string s;
char a;
unsigned int n;
int l, i, j;
cout « "Введите число: " « endl;
cin » n;
s = to_string(n);
l = s.length();
cout « "Строка: " « s « endl;
cout « "Длинна строки: "« l « endl;
for (i =0; i<(l-1); i++)
{
for (j = i+1; j<l; j++)
{
if (s[i]<s[j])
{
a =s[i]; s[i] =s[j]; s[j] =a;
}
}
}
cout « " " « endl;
cout « s « endl;
system("pause");
return 0;
}