#include "math.h"
#include "iostream"
using namespace std;

int main()
{
const double pi = 3.1415926535897932384626;
double a, b, c, alpha, betha, gama;
setlocale(0, "");
cout � "������� ������� �: ";
cin � a;
cout � "������� ������� b: ";
cin � b;
cout � "������� ������� c: ";
cin � c;
if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
{
//������ � ������� ���������
alpha = acos(-(a * a - b * b - c * c) / (2 * b * c));
betha = acos(-(b * b - a * a - c * c) / (2 * a * c));
gama = acos(-(c * c - a * a - b * b) / (2 * a * b));
cout � "���� ����� � ��������: " � alpha � " � ��������: " � (alpha * 180 / pi) � endl;
cout � "���� ���� � ��������: " � betha � " � ��������: " � (betha * 180 / pi) � endl;
cout � "���� ���� � ��������: " � gama � " � ��������: " � (gama * 180 / pi) � endl;
}
else
{
cout � "����������� �� ����������!!!" � endl;
}
system("pause");
}
