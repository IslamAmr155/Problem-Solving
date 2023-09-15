#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
	char c;
	int ind;
	string s;
	cin >> c >> s;
	string k = "qwertyuiopasdfghjkl;zxcvbnm,./";
	if(c == 'R')
		for (int i = 0; i < s.size(); i++)
		{
			ind = k.find(s[i]);
			cout << k[ind - 1];
		}
	else
		for (int i = 0; i < s.size(); i++)
		{
			ind = k.find(s[i]);
			cout << k[ind + 1];
		}
	return 0;
}