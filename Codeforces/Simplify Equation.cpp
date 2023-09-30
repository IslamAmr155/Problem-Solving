#include <iostream>

using namespace std;

int main() {
	int n, a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		int num1, num2;
		if (a % 10 == 0) {
			num1 = a;
			num2 = b;
		}
		else {
			num1 = b;
			num2 = a;
		}
		int remainder = num2 % 10;
		num2 -= remainder;
		cout << num2 << " x " << num1 << " + " << remainder << " x " << num1 << endl;
	}
	return 0;
}