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
int i = 0; // ������� �������
while (pass != password)
{
cout � "������� ������: ";
cin � pass;
i++;
cout � " " � endl;
};
cout � "���������� ������� ����� ������ = " � i � "." � endl;
system("pause");
return 0;
}