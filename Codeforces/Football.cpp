#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	int n, t1 = 0, t2 = 0;
	cin >> n;
	string s, t, p;
	cin >> s;
	t = s;
	t1++;
	for (int i = 0; i < n - 1; i++)
	{
		cin >> s;
		if (s == t)
			t1++;
		else {
			t2++;
			p = s;
		}
	}
	if (t1 > t2)
		cout << t;
	else
		cout << p;
	return 0;
}