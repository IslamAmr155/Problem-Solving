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

int n,e;
vector<vector<int>> houses;
vector<bool> visited;

void rec(int node,int count,bool& flag)
{
    if (count == n)
    {
        for (int i=0;i<houses[node].size();i++)
        {
            if (houses[node][i] == 0)
            {
                flag = 1;
                break;
            }
        }
        return;
    }
    for (int i=0;i<houses[node].size();i++)
    {
        if (!visited[houses[node][i]])
        {
            visited[houses[node][i]] = 1;
            rec(houses[node][i],count+1,flag);
            visited[houses[node][i]] = 0;
        }
    }
}

int main() {
    cin >> n >> e;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    houses.resize(n);
    visited.resize(n);
    int m,k;
    for (int i=0;i<e;i++)
    {
        cin >> m >> k;
        houses[m].push_back(k);
        houses[k].push_back(m);
    }
    bool flag = 0;
    visited[0] = 1;
    rec(0,1,flag);
    cout << flag;
    return 0;
}