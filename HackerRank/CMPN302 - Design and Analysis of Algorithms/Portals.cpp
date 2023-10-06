#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <climits>
using namespace std;

int n,m,s;
vector<vector<pair<int,int>>> portals;


int main() {
    cin >> n >> m >> s;
    int c,e,h;
    portals.resize(n);

    for (int i=0;i<m;i++)
    {
        cin >> c >> e >> h;
        portals[c].push_back(make_pair(e,h));
    }

    int count = 1;

    vector<int> dijkstra (n, INT_MAX);
    dijkstra[s] = 0;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    q.push(make_pair(dijkstra[s],s));
    pair<int,int> u;
    while (!q.empty())
    {
        u = q.top();
        q.pop();
        int node = u.second;
        for (int i=0;i<portals[node].size();i++)
        {
            int v = portals[node][i].first, cur = portals[node][i].second;
            if (dijkstra[v] == INT_MAX)
                count++;
            if (dijkstra[v] > cur + dijkstra[node])
            {
                dijkstra[v] = cur + dijkstra[node];
                q.push(make_pair(dijkstra[v],v));
            }
        }
    }

    int mi = INT_MIN;
    for (int i=0;i<n;i++)
        if (dijkstra[i] != INT_MAX)
            mi = max(mi,dijkstra[i]);
    cout << count << " " << mi;
    return 0;
}

