#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
	unsigned int res1 = 0, res2 = 0, n, i=1, res = 0;
	float a, a1, a2;

	//Задание 1

	cout << "Enter N\n";
	cin >> n;

	do {
		res = res + i;
		res1 = res1 + pow(i, 5) + pow(i, 7);
		i++;
	} 
	while (i <= n);

	res2 = 2 * pow(res, 4);

	cout << "res1 = " << res1 << "   res2 = " << res2 << endl;
	cout << res << endl;

	if (res1 == res2)
		cout << "true\n";
	else
		cout << "false\n";

	//задание 2

	res1 = res2 = 1;
	i = 2;

	cout << "Vvedite nomer elementa\n";
	cin >> n;

	for (i; i <= n; i++) {
		res = res1 + res2;
		res2 = res1;
		res1 = res;
	}

	cout << "F" << n << " = " << res2 << endl;

	//Задание 3

	a1 = 2.0;
	a2 = 1.0;
	
	cout << a2 << "  --  number 1\n";

	for (i = 2; fabs(a1 - a2) > 0; i++) {
		a = (a1 + a2) / 2;
		a2 = a1;
		a1 = a;
		cout << a2 << "  --  number " << i << endl;
	}

	return 0;
}