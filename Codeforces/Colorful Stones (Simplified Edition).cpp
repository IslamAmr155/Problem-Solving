#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, t;
	int pos = 1, j = 0;
	cin >> s >> t;
	for (int i = 0; i < t.size(); i++)
	{
		if (t[i] == s[j])
			j++;
	}
	cout << j + 1;
}