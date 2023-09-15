#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int t, a;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a;
		float sides = 2.0 / (1.0 - a / 180.0);
		if (sides - (int)sides == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}