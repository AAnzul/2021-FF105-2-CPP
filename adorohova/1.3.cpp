#include <iostream>
#include <string>
#include <conio.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
boolean flag = false;
int T, S, D, E, N, N1, M, M1;
cout � "������� �������������� �����: ";
cin � N;
N1 = N;
cout � "������� �����: ";
cin � M;
M1 = M;
T = N / 1000;
N = N % 1000;
S = N / 100;
N = N % 100;
D = N / 10;
E = N % 10;
flag = (M == T) or (M == S) or (M == D) or (M == E);
if (flag)
cout � "TRUE. ����� " �M1�" ������ � ����� " � N1 � "." � endl;
else
cout � "FALSE. ����� " � M1 � " �� ������ � ����� " � N1 � "." � endl;

system("pause");
return 0;
}
