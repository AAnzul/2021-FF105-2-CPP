#include <iostream>
#include <math.h>
using namespace std;

int main()
{
double x, res;
cout � "x = ";
cin � x;
res = (2 * (1 / tan((3 * x) - 1)) )/ (log(cos(x)) / log(1 + x * x));
cout � "res = " �res � "\n";
cin.get();
return 0;
}