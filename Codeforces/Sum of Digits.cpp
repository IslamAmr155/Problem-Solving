#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	int sum = 0, temp = 0;
	string s;
	cin >> s;
	while (s.size() > 1)
	{
		temp = 0;
		for (int i = 0; i < s.size(); i++) {
			temp += (s[i] - '0');
		}
		sum++;
		s = to_string(temp);
	}
	cout << sum;
	return 0;
}