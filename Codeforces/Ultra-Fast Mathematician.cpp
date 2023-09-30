#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string s, t;
	cin >> s >> t;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == t[i])
			cout << 0;
		else
			cout << 1;
	}
	return 0;
}

