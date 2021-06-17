#include <iostream>
#include <math.h>


using namespace std;

int main()
{
int t1, n1, p1, t2, n2, p2, t3, n3, p3, k1, k2, k3;
cin » t1 » n1 » p1;
cin » t2 » n2 » p2;
cin » t3 » n3 » p3;
k1 = t1 + n1 + p1;
k2 = t2 + n2 + p2;
k3 = t3 + n3 + p3;
if ((k1 >= k2) && (k1 >= k3))
{
cout « k1;
}
if ((k2 >= k1) && (k2 >= k3))
{
cout « k2;
}
if ((k3 >= k1) && (k3 >= k2))
{
cout « k3;
}
return 0;
}