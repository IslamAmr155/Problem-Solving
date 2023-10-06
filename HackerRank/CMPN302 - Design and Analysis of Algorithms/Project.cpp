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

vector<vector<long long>> dp(1001,vector<long long>(1001,-1));
int n,k;

long long stirling(int i,int j)
{
    if (dp[i][j] != -1)
        return dp[i][j];
    if (i == j)
    {
        dp[i][j] = 1;
        return 1;
    }
    if (i == 0 || j == 0)
    {
        dp[i][j] = 0;
        return 0;
    }
    dp[i][j] = stirling(i-1,j-1) + j * stirling(i-1,j);
    return dp[i][j];
}

int main() {
    cin >> n >> k;
    if (k == 1)
    {
        cout << 1;
        return 0;
    }
    cout << stirling(n,k);
    return 0;
}