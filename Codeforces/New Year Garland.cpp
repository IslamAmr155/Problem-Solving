#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>

#define ll long long 

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll t, r, g, b;
	cin >> t;
	while (t--)
	{
		cin >> r >> g >> b;
		/*ll maxrg = max(r, g);
		ll maxrb = max(r, b);
		ll maxgb = max(g, b);
		bool flag = true;
		if ((g+b) < r - 1 && abs(b + g - r + 1) > 1)
			flag = false;
		else if ((r+b) > 1 && g > r + b - 1)
			flag = false;
		else if (abs(b - g) > 1 && r > b + g - 1)
			flag = false;
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;*/
		int max, tot;
		if (r > g) {
			max = r;
			tot = g + b;
		}
		else
		{
			max = g;
			tot = r + b;
		}
		if (b > max) {
			max = b;
			tot = g + r;
		}
		if (max > tot + 1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}