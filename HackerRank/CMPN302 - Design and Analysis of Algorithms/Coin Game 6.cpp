#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int t,n;
vector<int> a;

void rec(int i,int c,bool& flag)
{
    if (i > n)
        return;
    if (t == c)
        flag = 1;
    rec(i+1,c,flag);
    rec(i+1,c+a[i],flag);
}

int main() {
    cin >> t >> n;
    a.resize(n);
    for (int i=0;i<n;i++)
        cin >> a[i];
    bool flag = 0;
    rec(0,0,flag);
    cout << flag;
    return 0;
}
