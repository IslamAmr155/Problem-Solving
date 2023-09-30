#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	long long n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		if (n == 0) {
			cout << "0 0" << endl;
			continue;
		}
		if (n > 0)
			cout << -(n - 1) << " " << n << endl;
		else
			cout << n << " " << -(n + 1) << endl;
	}
	return 0;
}