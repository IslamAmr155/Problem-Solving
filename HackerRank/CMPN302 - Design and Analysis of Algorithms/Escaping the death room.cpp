#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int n,k,r,x,y;
vector<pair<int,int>> moves;
vector<vector<vector<long long>>> dp(71,vector<vector<long long>>(71,vector<long long>(101,-1)));

long long rec(int i,int j,int num)
{
    if ((i >= n || i < 0 || j >= n || j < 0) && num <= k)
        return 1;
    if (num == k)
        return 0;
    if (dp[i][j][num] != -1)
        return dp[i][j][num];
    long long a = 0;
    for (int m=0;m<r;m++)
        a += rec(i+moves[m].first,j+moves[m].second,num+1);
    return dp[i][j][num] = a;
}

int main()
{
    cin >> n >> k >> r >> x >> y;
    moves.resize(r);
    for (int i=0;i<r;i++)
    {
        cin >> moves[i].first;
        cin >> moves[i].second;
    }
    cout << rec(x,y,0);
    return 0;
}
