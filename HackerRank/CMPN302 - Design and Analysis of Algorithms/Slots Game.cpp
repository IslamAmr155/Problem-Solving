#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a,as,ai,ab,cs,ci,cb;
vector<int> dp(100001,-1);

int rec(int area)
{
    if (area >= a)
        return 0;
    if (dp[area] != -1)
        return dp[area];
    dp[area] = min(cs+rec(area+as),min(ci+rec(area+ai),cb+rec(area+ab)));
    return dp[area];
}

int main() {
    cin >> a >> as >> ai >> ab >> cs >> ci >> cb;
    cout << rec(0);
    return 0;
}
