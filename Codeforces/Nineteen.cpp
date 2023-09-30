#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

int main()
{
	string s;
	cin >> s;
	int cn=0, ci=0,ce=0, ct = 0;
	for (int i=0;i<s.size();i++)
	{
		switch (s[i]) {
		case 'n':
			cn++;
			break;
		case 'i':
			ci++;
			break;
		case 'e':
			ce++;
			break;
		case 't':
			ct++;
			break;
		}
	}
	if (cn >= 3)
		cn = ((cn - 3) / 2) + 1;
	else
		cn = 0;
	ce /= 3;
	int mi = cn;
	if (ce < mi)
		mi = ce;
	if (ci < mi)
		mi = ci;
	if (ct < mi)
		mi = ct;
	cout << mi;
	return 0;
}