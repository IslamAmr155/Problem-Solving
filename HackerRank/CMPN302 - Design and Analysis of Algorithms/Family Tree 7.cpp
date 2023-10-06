#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int n;
vector<vector<int>> family;
vector<int> members;
stack<int> s;

void dfs(int u)
{
    members[u] = 1;
    for (int i=0;i<family[u].size();i++)
    {
        int node = family[u][i];
        if (node != -1 && members[node] == 0)
            dfs(node);
    }

    s.push(u);
}

int main() {
    cin >> n;
    family.resize(n);
    members.resize(n);
    int a,b;
    for (int i=0;i<n;i++)
    {
        members[i] = 0;

        cin >> a >> b;
        if (a != -1)
            family[a].push_back(i);
        if (b != -1)
            family[b].push_back(i);
    }

    for (int i=0;i<n;i++)
        if (members[i] == 0)
            dfs(i);

    for (int i=0;i<n;i++)
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}