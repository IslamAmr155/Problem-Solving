#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	char c;
	int let[26]{ 0 };
	for (int i = 0; i < n; i++)
	{
		c = tolower(s[i]);
		if (!let[c - 'a'])
			let[c - 'a']++;
	}
	int sum = 0;
	for (int i = 0; i < 26; i++)
		sum += let[i];
	if (sum == 26)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}