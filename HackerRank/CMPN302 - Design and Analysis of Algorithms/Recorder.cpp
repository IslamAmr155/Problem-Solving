#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int m,s;
vector<int> songs;

void rec(int i,int current,int& ma)
{
    if (i == s)
    {
        if (current <= m)
            ma = max(ma,current);
        return;
    }
    rec(i+1,current + songs[i],ma);
    rec(i+1,current,ma);
}

int main() {
    cin >> m >> s;
    songs.resize(s);
    for (int i=0;i<s;i++)
        cin >> songs[i];
    int ma = 0;
    rec(0,0,ma);
    cout << ma;
    return 0;
}
