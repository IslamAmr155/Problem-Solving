#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	string final;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != 'A' && s[i] != 'O' && s[i] != 'Y' && s[i] != 'E' && s[i] != 'U' && s[i] != 'I' && s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i')
		{
			final += ".";
			final += tolower(s[i]);
		}
	}
	cout << final;
	return 0;
}