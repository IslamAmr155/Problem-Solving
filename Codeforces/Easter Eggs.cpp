#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	int n;
	cin >> n;
	string c = "ROYGBIV", p = "";
	int r = n % 7;
	if (r < 4)
	{
		for (int i = 0; i < n / 7 - 1; i++)
			p += c;
		for (int i = 0; i < 4; i++)
			p += c[i];
		for (int i = 0; i < r; i++)
			p += c[i];
		for (int i = 4; i < 7; i++)
			p += c[i];
	}
	else
	{
		for (int i = 0; i < n / 7; i++)
			p += c;
		for (int i = 0; i < r; i++)
			p += c[i];
	}
	cout << p;
	return 0;
}