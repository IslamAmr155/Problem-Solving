#include <map>
#include <set>
#include <list>
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

long long rec (int x,int y,vector<vector<long long>>& dp)
{
    if (x == 0 && y == 0)
        return 1;
    else if (x < 0  || y < 0)
        return 0;
    if (dp[x][y] != -1)
        return dp[x][y];
    dp[x][y] = rec(x-1,y,dp) + rec (x,y-1,dp);
    return dp[x][y];
}

int main() {
    int x,y;
    cin >> x >> y;
    vector<vector<long long>> dp(1001,vector<long long> (1001,-1));
    cout << rec (x,y,dp);
    return 0;
}
