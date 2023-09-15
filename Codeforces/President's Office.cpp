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
	int n, m, sum = 0;
	char c, o;
	cin >> n >> m >> c;
	map<pair<int,int>,char> grid;
	for (int i=0;i<n;i++)
		for (int j = 0; j < m; j++)
		{
			cin >> o;
			grid.insert(make_pair(make_pair(i,j),o));
		}
	grid.find(make_pair(1,1));
	pair <int, int> p;
	for (auto& i : grid)
		if (i.second == c) {
			p = i.first;
			break;
		}
	pair <int, int> above (p.first + 1, p.second);
	pair <int, int> right (p.first , p.second + 1);
	pair <int, int> below (p.first - 1, p.second);
	pair <int, int> left (p.first, p.second - 1);
	if (grid.find(above) != grid.end() && grid.find(above)->second != '.' && grid.find(above)->second != c)
		sum++;
	if (grid.find(right) != grid.end() && grid.find(right)->second != '.' && grid.find(right)->second != c)
		sum++;
	if (grid.find(below) != grid.end() && grid.find(below)->second != '.' && grid.find(below)->second != c)
		sum++;
	if (grid.find(left) != grid.end() && grid.find(left)->second != '.' && grid.find(left)->second != c)
		sum++;
	cout << sum;
	return 0;
}