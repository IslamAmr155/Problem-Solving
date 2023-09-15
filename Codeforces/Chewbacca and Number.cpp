#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	long long x;
	cin >> x;
	string s = to_string(x);
	if (s[0] > '4' && s[0] != '9')
		s[0] = '9' - s[0] + '0';
	for (int i = 1; i < s.size(); i++)
	{
		if (s[i] > '4')
			s[i] = '9' - s[i] + '0';
	}
	cout << s;
	return 0;
}