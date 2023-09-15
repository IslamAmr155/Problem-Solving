#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;

//int main()
//{
//	int n, coin, me = 0, twin = 0, noc = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> coin;
//		if (me <= twin)
//		{
//			me += coin;
//			noc++;
//		}
//		else if (twin < me)
//			twin += coin;
//	}
//	if (me <= twin)
//	{
//		twin -= coin;
//		me += coin;
//		noc++;
//	}
//	cout << noc;
//	return 0;
//}

//int main()
//{
//	int n, soc = 0, noc = 0, sum = 0, rc = 0, rsum = 0;
//	cin >> n;
//	int* coins = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> coins[i];
//		soc += coins[i];
//	}
//	int half = soc / 2;
//	for (int i = 0; i < n; i++)
//	{
//		if (sum < (half+1))
//		{
//			sum += coins[i];
//			noc++;
//		}
//		else
//		{
//			rsum += coins[i];
//			rc++;
//		}
//	}
//	if (rsum >= sum && rc < noc)
//		cout << rc;
//	else if (rsum >= sum && rc == noc)
//		cout << noc + 1;
//	else
//		cout << noc;
//}

int main()
{
	int n, sum = 0;
	cin >> n;
	int* coins = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> coins[i];
		sum += coins[i];
	}
	sort(coins, coins + n);
	reverse(coins,coins+n);
	int soc = 0, noc = 0, i = 0;
	while (soc <= sum / 2)
	{
		soc += coins[i];
		i++;
		noc++;
	}
	cout << noc;
}