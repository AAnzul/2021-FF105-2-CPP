#include <iostream>

using namespace std;

int main() {
	int num, x = 0, count = 0;

	cout << "Enter number\n";
	cin >> num;

	do {
		num = num / 10;
		switch (num) {
		case (0):
			x = 1;
		default:
			count++;
		}
	} while (x == 0);

	cout << "Count: " << count << endl;

	return 0;
}