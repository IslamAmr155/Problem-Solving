#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>
#include <map>

#define ll long long 

using namespace std;

int main()
{
	string s;
	cin >> s;
	ll l = s.size();
		string n = s;
		n.substr(0, l / 2);
		reverse(n.begin(), n.end());
		s += n;
	/*string rs = s;
	reverse(rs.begin(), rs.end());
	ll ind = l--;
	for (ll i = 0; i < l ; i++)
	{
		if (s[i] != rs[i])
		{
			ispal = false;
			break;
		}
	}
	if (!ispal)
	{
		string n = s;
		n.substr(0, l / 2);
		reverse(n.begin(), n.end());
		s += n;
	}*/
	cout << s;
	return 0;
}