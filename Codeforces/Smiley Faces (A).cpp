#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int eyes = a / 2 + b;
	if (eyes < c)
		cout << eyes;
	else
		cout << c;
	return 0;
}