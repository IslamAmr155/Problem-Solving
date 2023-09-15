#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	int n, e = numeric_limits<int>::max();
	bool ch = false;
	string s;
	cin >> n >> s;
	int* c = new int[n];
	for (int i=0;i<n;i++)
		cin >> c[i];
	for (int i=0;i<n-1;i++)
	{
		if (s[i] == 'R' && s[i + 1] == 'L')
		{
			if ((c[i + 1] - c[i]) / 2 > 0 && (c[i + 1] - c[i]) / 2 < e)
			{
				e = (c[i + 1] - c[i]) / 2;
				ch = true;
			}
		}
	}
	if (!ch)
		cout << -1;
	else
		cout << e;
	return 0;
}