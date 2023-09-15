#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int i = 0;
	string de = "WUB";
	string token;
	while (1)
	{
		i = s.find("WUB", 0);
		if (i == -1)
			break;
		token = s.substr(0, i);
		cout << token << " ";
		s.erase(0, i + de.length());
	}
	cout << s;
	return 0;
}