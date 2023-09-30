#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n, a, b, s;
	cin >> n >> a >> b >> s;
	s -= (a + b);
	n -= 2;
	if (a * n <= s && b * n >= s)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}