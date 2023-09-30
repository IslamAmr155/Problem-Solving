#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long 

using namespace std;

void rec(ll** arr,int n,int m)
{
	int r1 = 0, r2 = n - 1, c1 = 0, c2 = m - 1, sum = 0;
	while (sum != n*m) {
		for (int i = c1; i <= c2; i++) {
			cout << arr[r1][i] << " ";
			sum++;
		}
		r1++;
		if (r1 > r2)
			return;
		for (int i = r1; i <= r2; i++) {
			cout << arr[i][c2] << " ";
			sum++;
		}
		c2--;
		if (c1 > c2)
			return;
		for (int i = c2; i >= c1; i--) {
			cout << arr[r2][i] << " ";
			sum++;
		}
		r2--;
		if (r1 > r2)
			return;
		for (int i = r2; i >= r1; i--) {
			cout << arr[i][c1] << " ";
			sum++;
		}
		c1++;
		if (c1 > c2)
			return;
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	ll**arr = new ll* [n];
	for (int i = 0; i < n; i++)
		arr[i] = new ll[m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	rec(arr, n, m);
	return 0;
}