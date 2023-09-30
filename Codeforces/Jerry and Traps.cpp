#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, x;
	string s;
	bool trap = false;
	cin >> n;
	cin >> s;
	for (int i = 0; i < n; i++) {
		if (trap && s[i] == '1') {
			cout << "NO";
			return 0;
		}
		else if (trap && s[i] == '0')
			trap = false;
		else if (s[i] == '1')
			trap = true;
	}
	cout << "YES";
	return 0;
}