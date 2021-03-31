#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	int i = 1, array[3], num1, num2, num3;
	float x, y, res;
	double pi = acos(-1.0);

	//Задание 1

	cout << "Enter X and then enter Y\n";
	cin >> x >> y;
	res = exp(x) - ((powf(y, 2) + 12 * x * y - 3 * powf(x, 2)) / (18 * y - 1));
	cout << "Result = " << res << endl << "x = " << x << endl << "y = " << y << endl;

	//Задание 2

	for (i;i < 5;i++) {
		res = pow(pi, i);
		cout << res <<"  -- number " <<i<< endl;
	}

	//Задание 3

	cout << "Enter 3 numerals\n";
	cin >> array[0] >> array[1] >> array[2];
	if (array[2] / array[1] == array[1] / array[0])
		cout << "true\n";
	else
		cout << "false\n";

	//Задание 4

	cout << "Enter coordinate X and then enter the Y\n";
	cin >> x >> y;
	if (y >= 1 && y <= 7 && x <= -1 && x >= -4)
		cout << "true";
	else if (y >= 4 && y <= 7 && x >= -1 && x <= 3)
		cout << "true";
	else cout << "false";


	return 0;
}