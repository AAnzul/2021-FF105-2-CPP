#include <iostream>
#include <string>
#include <locale.h>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
string password = "5555";
string pass;
int i = 0; // счетчик попыток
while (pass != password)
{
cout « "Введите пароль: ";
cin » pass;
i++;
cout « " " « endl;
};
cout « "Количество попыток ввода пароля = " « i « "." « endl;
system("pause");
return 0;
}