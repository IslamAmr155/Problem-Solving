#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>
#include <map>
#include <vector>

#define ll long long 

using namespace std;

int main()
{
	int k;
	cin >> k;
	while (k--)
	{
		int n, d = 0;
		string s, t;
		cin >> n >> s >> t;
		char s1, s2, t1, t2;
		for (int i = 0; i < n; i++)
		{
			if (s[i] != t[i]) {
				d++;
				if (d == 3)
					break;
				else if (d == 1)
				{
					s1 = s[i];
					t1 = t[i];
				}
				else if (d == 2)
				{
					s2 = s[i];
					t2 = t[i];
				}
			}
		}
		if (d == 2 && s1 == s2 && t1 == t2)
			cout << "Yes" << endl;
		else if (d == 0)
			cout << "Yes";
		else
			cout << "No" << endl;
	}
	return 0;
}