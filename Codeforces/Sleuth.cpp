#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	char s[105];
	cin.getline(s, 105);
	char c;
	bool found = false;
	for (int i = 0; i < 105; i++)
	{
		if (s[i] == '?')
			for (int j = i - 1; j >= 0; j--)
			{
				if (s[j] == 32)
					continue;
				else {
					c = s[j];
					found = true;
					break;
				}
			}
		if (found)
			break;
	}
	c = tolower(c);
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
		cout << "YES";
	else
		cout << "NO";
	return 0;
}