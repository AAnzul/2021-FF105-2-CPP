#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x, array[4], i;
	double arg, res, a, b, c, d, t1, t2, x1, x2, x3, x4;


	//Задание 1A

	cout << "Enter age, enter 0 to end\n";
	cin >> x;
	if (x > 0 && x < 6)
		cout << "Doshkolnik\n";
	else if (x >= 6 && x <= 22)
		cout << "Uchenik\n";
	else if (x > 22 && x < 66)
		cout << "Rabotnik\n";
	else if (x >= 65 && x < 100)
		cout << "Pensioner\n";
	else if (x >= 100)
		cout << "Possibly dead now...\n";
	else if (x <= 0)
		cout << "Possibly not born yet :)\n";

	//Задание 1B

	for (i = 0; i < 4; i++) {
		cout << "enter " << i << " numeral\n";
		cin >> array[i];
	}
	for (i = 0; i < 4; i++) {
		if (array[i] != array[0])
			if (array[i] != array[1]) {
				if (array[i] != array[2]) {
					if (array[i] != array[3])
						cout << endl << "num  --  " << i << endl;
					else cout << endl << "num  --  " << i << endl;
				}
				else cout << endl << "num  --  " << i << endl;
			}
			else cout << endl << "num  --  " << i << endl;
		else cout << "incorrect numbers" << endl;
	}

	//Задание 1C

	cout << "Enter a, b, c\n";
	cin >> a >> b >> c;
	if (a <= 0)
		cout << "incorrect A, try another\n";
	else {
		d = pow(b, 2) - 4 * a * c;
		if (d < 0)
			cout << "d < 0, try other numbers\n";
		else if (d == 0) {
			t1 = -b / 2 * a;
			if (t1 >= 0) {
				x1 = sqrtf(t1);
				x2 = -sqrtf(t1);
				cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
			}
		}
			else if (d > 0) {
				t1 = (-b + sqrtf(d)) / 2 * a;
				t2 = (-b - sqrtf(d)) / 2 * a;
				if (t1 >= 0) {
					x1 = sqrtf(t1);
					x2 = -sqrtf(t1);
					cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
				}
				if (t2 >= 0) {
					x3 = sqrtf(t2);
					x4 = -sqrtf(t2);
					cout << "x3 = " << x3 << endl << "x4 = " << x4 << endl;
				}
				if (t1 < 0 && t2 < 0) {
					cout << "net kornei\n";
				}
			}
		}
	

	//Задание 2

	cout << "Enter X\n";
	cin >> arg;
	if (arg > -4) {
		res = cosf(2 * arg) + 9;
		cout << "X = " << arg << endl << "result = " << res << endl;
	}

	else if (arg <= -4) {
		res = -((cosf(arg)) / (arg - 9));
		cout << "X = " << arg << endl << "result = " << res << endl;
	}



	return 0;
}
