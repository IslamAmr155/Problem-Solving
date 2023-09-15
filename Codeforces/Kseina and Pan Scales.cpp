#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	string s, w;
	cin >> s >> w;
	int i = 0, l= 0,r = 0;
	while (s[i] != '|')
	{
		l++;
		i++;
	}
	r = s.size() - l - 1;
	if (abs(r - l) == 0 && w.size() == 0)
		cout << s;
	else if (abs(r - l) > w.size())
		cout << "Impossible";
	else if (abs(r - l) == w.size())
	{
		if (l > r)
		{
			cout << s;
			for (int j = 0; j < l - r; j++)
				cout << w[j];
		}
		else if (r > l)
		{
			for (int j = 0; j < r - l; j++)
				cout << w[j];
			cout << s;
		}
	}
	else if (w.size() > abs(r - l))
	{
		int rem = w.size() - abs(r - l);
		if (rem % 2 != 0)
		{
			cout << "Impossible";
			return 0;
		}
		if (l > r)
		{
			for (int j = 0; j < rem / 2; j++)
				cout << w[j];
			cout << s;
			for (int j = rem/2; j < w.size(); j++)
				cout << w[j];
		}
		else if (r > l)
		{
			for (int j = 0; j < r - l + rem/2; j++)
				cout << w[j];
			cout << s;
			for (int j = r-l+rem/2; j < w.size(); j++)
				cout << w[j];

		}
		else
		{
			for (int j = 0; j < rem / 2; j++)
				cout << w[j];
			cout << s;
			for (int j = rem / 2; j < w.size(); j++)
				cout << w[j];
		}
	}
	return 0;
}