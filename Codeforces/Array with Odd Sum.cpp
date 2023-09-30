#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t, n, num;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int se = 0, so = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> num;
			if (num % 2 != 0)
				so++;
			else
				se++;
		}
		if (!so)
			cout << "NO" << endl;
		else if (n % 2 != 0)
			cout << "YES" << endl;
		else if (n % 2 == 0 && se)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}