#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n, x=0;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		int f = s.find("++", 0);
		if (f != -1)
			x++;
		else
			x--;
	}
	cout << x;
	return 0;
}