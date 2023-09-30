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
	int n, t, x, y, suma = 0, sumb = 0;
	cin >> n;
	while (n--)
	{
		cin >> t >> x >> y;
		if (t == 1)
		{
			suma += x;
			suma -= y;
		}
		else
		{
			sumb += x;
			sumb -= y;
		}
	}
	if (suma >= 0)
		cout << "LIVE" << endl;
	else
		cout << "DEAD" << endl;
	if (sumb >= 0)
		cout << "LIVE" << endl;
	else
		cout << "DEAD" << endl;
	return 0;
}