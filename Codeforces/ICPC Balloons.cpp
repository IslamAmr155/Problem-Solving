#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	int t, n, b = 0;
	string s;
	cin >> t;
	while (t--)
	{
		cin >> n >> s;
		b = 0;
		int arr[26];
		for (int i = 0; i < 26; i++)
			arr[i] = 0;
		for (int i = 0; i < n; i++)
			arr[s[i] - 'A']++;
		for (int i=0;i<26;i++)
			if (arr[i] > 0)
			{
				b += 2;
				b += (arr[i] - 1);
			}
		cout << b << endl;
	}
	return 0;
}