#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>
 
#define ll long long 
 
using namespace std;
 
int main()
{
	int t, days = 0, j;
	cin >> t;
	string s, word;
	for (int i = 0; i < t; i++)
	{
		cin >> s;
		days = 0;
		while (!s.empty())
		{
			word = "";
			j = 0;
			if (s.size() <= 3)
			{
				days++;
				break;
			}
			while (word.size() < 3)
			{
				if (word.find(s[j]) == std::string::npos)
					word += s[j];
				j++;
			}
			for (j = 2; j < s.size(); j++)
			{
				if (word.find(s[j]) != std::string::npos)
					word += s[j];
				else
					break;
			}
			s.erase(0, j);
			days++;
		}
		cout << days << endl;
	}
	return 0;
}