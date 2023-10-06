#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n;
vector<int> treasures;
vector<vector<int>> dp2;
//vector<long long> dp1(10001,-1);

/*long long rec(int i,int j,long long& total,bool me )
{
    if (i > j)
        return 0;
    if (!me)
    {
        if (treasures[i] > treasures[j])
        {
            total += treasures[i];
            total += rec(i+1,j,total,1);
        }
        else
        {
            total += treasures[j];
            total += rec(i,j-1,total,1);
        }
    }
    else
    {
        if (treasures[i] > treasures[j])
            rec(i+1,j,total,0);
        else
            rec(i,j-1,total,0);
    }
    return 0;
}*/

int rec2(int i,int j)
{
    if (i > j)
        return 0;
    if (dp2[i][j] != -1)
        return dp2[i][j];
    long long a = 0, b = 0;
    a += treasures[i] + min(rec2(i+2,j),rec2(i+1,j-1));
    b += treasures[j] + min(rec2(i+1,j-1),rec2(i,j-2));
    return dp2[i][j] = max(a,b);
}

int main() {
    cin >> n;
    treasures.resize(n);
    dp2.resize(n);
    for (int i=0;i<n;i++)
    {
        cin >> treasures[i];
        dp2[i].resize(n,-1);
    }
    int a = rec2(0,n-1);
    cout << dp2[0][n-1];
    return 0;
}

