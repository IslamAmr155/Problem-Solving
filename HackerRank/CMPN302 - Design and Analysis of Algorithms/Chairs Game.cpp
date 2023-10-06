#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n;
vector<string> names;
vector<bool> visited;

void rec(int& count,vector<string>& cur)
{
    if (cur.size() == n)
    {
        for (int i=0;i<n/2;i++)
        {
            if (cur[i] == cur[n-i-1])
                return;
        }
        for (int i=0;i<n-1;i++)
        {
            if (cur[i] == cur[i+1])
                return;
        }
        count++;
        return;
    }
    for (int i=0;i<n;i++)
    {
        if (!visited[i])
        {
            visited[i] = 1;
            cur.push_back(names[i]);
            rec(count,cur);
            visited[i] = 0;
            cur.pop_back();
        }
    }
}

int main() {
    cin >> n;
    names.resize(n);
    visited.resize(n,0);
    for (int i=0;i<n;i++)
        cin >> names[i];
    int count = 0;
    vector<string> cur;
    rec(count,cur);
    cout << count;
    return 0;
}
