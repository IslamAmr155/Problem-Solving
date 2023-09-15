#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, groups = 0;
	string s1, s2;
	cin >> n >> s1;
	for (int i = 0; i < n - 1; i++)
	{
		cin >> s2;
		if (s1[1] == s2[0])
			groups++;
		s1 = s2;
	}
	cout << ++groups;
}