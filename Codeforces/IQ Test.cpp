#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	char s[4][4];
	int h = 0;
	bool sq = false;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			cin >> s[i][j];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			h = 0;
			if (s[i][j] == '#')
				h++;
			if (s[i + 1][j] == '#')
				h++;
			if (s[i][j + 1] == '#')
				h++;
			if (s[i + 1][j + 1] == '#')
				h++;
			if (h != 2)
			{
				sq = true;
				break;
			}
		}
		if (sq)
			break;
	}
	if (sq)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}