#include <iostream>
#include <conio.h>
#include <locale.h>
#include <windows.h>

int main()
{
setlocale(LC_ALL, "Russian");
int N;
int kol = 0;
std:: cout « "Âåäèòå ÷èñëî =";
std:: cin » N;
while (N % 10 == 0)
{
N /= 10;
}
while (N > 1)
{
if (N % 10 == 0) { kol++; }N /= 10;
}

std::cout « "nulls = " « kol « "\n";

system("pause");
return 0;
}