#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int k,n;
vector<int> counts;
vector<bool> visited;

void rec (vector<string>& cur,string& str)
{
    if (str.size() == n && find(cur.begin(),cur.end(),str) == cur.end())
    {
        cur.push_back(str);
        return;
    }
    for (int i=0;i<counts.size();i++)
    {
        if (!visited[i]) {
            str += counts[i] + '0';
            visited[i] = 1;
            rec(cur, str);
            str = str.substr(0, str.size() - 1);
            visited[i] = 0;
        }
    }
}

int main() {
    cin >> k >> n;
    int a;
    for (int i=0;i<k;i++)
    {
        cin >> a;
        while(a--)
            counts.push_back(i);
    }
    visited.resize(counts.size(),0);
    string str = "";
    vector<string> cur;
    rec(cur,str);
    for (int i=0;i<cur.size();i++)
        cout << cur[i] << '\n';
    return 0;
}
