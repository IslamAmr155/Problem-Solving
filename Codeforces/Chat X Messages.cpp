#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, m;
	int count = 0;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		cin >> s;
		count = 0;
		for (int j = 0; j < m; j++) {
			if (s[j] == ')')
				count++;
			else
				count = 0;
		}

			if (count > m / 2)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
	}
	return 0;
}