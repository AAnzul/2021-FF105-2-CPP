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
cout � "������� ����� ������� ��������� (1; 2; 3; 4; 5): ";
cin � n;
cout � "������� ����� (�): ";
cin � m;
if (n == 1)
{
cout � "������� ��������� ����������." � endl;
cout � "����� �= " � m � " ��. " � endl;
}
if (n == 2)
{
cout � "������� ��������� �����������." � endl;
cout � "����� �= " � m* 0.000001 � " ��. " � endl;
}
if (n == 3)
{
cout � "������� ��������� ������" � endl;
cout � "����� �= " � m * 0.001 � " ��. " � endl;
}
if (n == 4)
{
cout � "������� ��������� �����." � endl;
cout � "����� �= " � m * 1000 � " ��. " � endl;
}

if (n == 5)
{
cout � "������� ��������� �������." � endl;
cout � "����� �= " � m * 100 � " ��. " � endl;
}
system("pause");
return 0;
}