#include <iostream>
#include <string>

using namespace std;

int main() {
	int t, n, count = 0, x;
	cin >> t;
	for (int i = 0; i < t; i++) {
		count = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> x;
			if (x > 0)
				count++;
		}
		cout << count << endl;
	}
	return 0;
}