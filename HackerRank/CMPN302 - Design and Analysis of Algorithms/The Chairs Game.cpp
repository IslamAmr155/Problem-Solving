#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void theChairsGame(const vector<string>& p,vector<bool>& visited,vector<string>& cur,int& num,int n)
{
    if (cur.size() == n)
    {
        for (int i=0;i<n - 1;i++)
        {
            if (*(cur[i].end() - 1) == *cur[i+1].begin())
                return;
        }
        num++;
    }
    for (int i=0;i<n;i++)
    {
        if (!visited[i])
        {
            cur.push_back(p[i]);
            visited[i] = 1;
            theChairsGame(p,visited,cur,num,n);
            cur.pop_back();
            visited[i] = 0;
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,num = 0;
    cin >> n;
    vector<string> p(n);
    vector<bool> visited(n,0);
    vector<string> cur;
    for (int i=0;i<n;i++)
        cin >> p[i];
    theChairsGame(p,visited,cur,num,n);
    cout << num;
    return 0;
}

