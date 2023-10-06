#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

struct Node{
    int data;
    vector<int> v;
    Node (int x) {data = x;}
};

void DFS (unordered_map<int,Node*> tree,Node* root,vector<bool>& visited,int index,int dark,int& count,const int& m)
{
    visited[index-1] = 1;
    if (root->data == 1)
        dark++;
    else
        dark = 0;
    if (dark > m)
        return;
    bool leaf = false;
    for (int i=0;i<root->v.size();i++)
    {
        if (!visited[root->v[i]-1])
        {
            leaf = true;
            break;
        }
    }
    if (!leaf)
    {
        count++;
        return;
    }
    for (int i=0;i<root->v.size();i++)
        if (!visited[root->v[i]-1])
            DFS(tree,tree[root->v[i]],visited,root->v[i],dark,count,m);
}

int main() {
    int n,m,d,a;
    cin >> n >> m;
    unordered_map<int,Node*> tree;
    for (int i=0;i<n;i++)
    {
        cin >> d;
        tree[i+1] = new Node(d);
    }
    for (int i=0;i<n-1;i++)
    {
        cin >> d >> a;
        tree[a]->v.emplace_back(d);
        tree[d]->v.emplace_back(a);
    }
    int dark=0,count=0;
    vector<bool> visited(n,0);
    DFS(tree,tree[1],visited,1,dark,count,m);
    cout << count;
    return 0;
}

