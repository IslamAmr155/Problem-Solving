#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int start = 'a', end, steps = 0;
	for (int i = 0; i < s.size(); i++)
	{
		end = abs(s[i] - start);
		if (end > 13)
			end = 26 - end;
		steps += end;
		start = s[i];
	}
	cout << steps;
}