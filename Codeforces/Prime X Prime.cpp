#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, m, j, i;
	bool isnotprime = false;
	cin >> n >> m;
	for (i = n + 1; i < m + 1; i++) {
		for (j = 2; j < i - 1; j++) {
			if (i % j == 0) {
				isnotprime = true;
				break;
			}
		}
		if (j == i - 1)
			if (i == m) {
				cout << "YES";
				break;
			}
			else {
				cout << "NO";
				break;
			}
		if (isnotprime && i == m) {
			cout << "NO";
			break;
		}
	}
	return 0;
}