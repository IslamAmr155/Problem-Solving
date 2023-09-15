#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int n;
	string s;
	cin >> n >> s;
	int start = s.find_first_not_of('.', 0);
	int end = s.find_last_not_of('.', n);
	if (s[start] == 'R' && s[end] == 'R')
		cout << start + 1 << " " << end + 1 + 1;
	else if (s[start] == 'L' && s[end] == 'L')
		cout << end + 1 << " " << start;
	else
	{
		for (int i = start; i < n; i++)
		{
			if (s[i] != 'R') {
				end = i;
				break;
			}
		}
		cout << start + 1 << " " << end;
	}
	return 0;
}