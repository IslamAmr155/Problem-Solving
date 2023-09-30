#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << sqrt(n / 6) << endl;
	}
	return 0;
}