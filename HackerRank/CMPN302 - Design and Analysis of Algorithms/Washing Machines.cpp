#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int t,n,k;
vector<int> people;

int rec(int i,int k1,int k2,vector<vector<int>>& dp)
{
    if (i == n)
    {
        if (k1 >= 0 && k2 >=0)
            return 1;
        else
            return 0;
    }
    if (k1 < 0 || k2 < 0)
        return 0;
    if (dp[k1][k2] != -1)
        return dp[k1][k2];
    return dp[k1][k2] = rec(i+1,k1 - people[i],k2,dp) || rec(i+1,k1,k2 - people[i],dp);
}

int main() {
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        people.resize(n);
        vector<vector<int>> dp(1001,vector<int>(1001,-1));
        for (int i = 0; i < n; i++)
            cin >> people[i];
        cout << rec(0, k, k,dp) << '\n';
    }
    return 0;
}

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_set>
#include<utility>
using namespace std;
#define ll long long
//long long escape(vector<vector<vector<long long>>>& dp,int x,int y,int remainder,const int &n,vector<pair<int,int>> &moves)
//{
//	if (x < 0 || x >= n || y < 0 || y >= n)
//		return 1;
//	if (remainder <= 0)
//		return 0;
//	if (dp[x][y][remainder] == -1)
//	{
//		dp[x][y][remainder] = 0;
//		for (int i = 0; i < moves.size(); i++)
//		{
//			dp[x][y][remainder] += escape(dp, x + moves[i].first, y + moves[i].second, remainder - 1, n, moves);
//		}
//	}
//	return dp[x][y][remainder];
//}
ll knapsack(vector<vector<ll>>& dp, ll remainder, int index, const vector<int>& people)
{
    if (remainder < 0)
        return INT_MAX;
    if (index == people.size())
    {
        if(remainder>=0)
            return remainder;
        return INT_MAX;
    }
    if (dp[remainder][index] == -1)
    {
        dp[remainder][index] = min(knapsack(dp,remainder-people[index],index+1,people), knapsack(dp, remainder, index + 1, people));

    }
    return dp[remainder][index];

}
//int valid(vector<vector<int>>& dp, int index, int remainder,const vector<int> &bottles)
//{
//	if (remainder == 0)
//		return 1;
//	if (remainder < 0)
//		return 0;
//	if (index == bottles.size())
//		return 0;
//	if (dp[index][remainder] == -1)
//		dp[index][remainder] = valid(dp,index+1,remainder,bottles) + valid(dp,index+1,remainder-bottles[index],bottles);
//
//	return dp[index][remainder];
//
//
//}
int main()
{
    int t,n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<int> people(n);
        ll sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> people[i];
            sum += (ll)people[i];
        }
        vector<vector<ll>> dp(k+1, vector<ll>(n, -1));
        int val = knapsack(dp, k, 0, people);
        if (sum - (k - val) <= k)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}