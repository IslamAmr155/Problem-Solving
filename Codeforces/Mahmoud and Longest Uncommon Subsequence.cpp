#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	if (a == b)
		cout << -1;
	else if (a.size() > b.size())
		cout << a.size();
	else
		cout << b.size();
	return 0;
}