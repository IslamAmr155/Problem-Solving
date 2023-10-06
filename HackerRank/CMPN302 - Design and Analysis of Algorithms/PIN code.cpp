#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

struct Node{
    int data;
    int height = 0;
    Node* left = nullptr;
    Node* right = nullptr;
    Node (int x) {data = x;}
};

void minimum_BFS(Node* root, int level,int& mi)
{
    if (root == NULL)
        return;
    if (level == 0)
        mi = (mi < root->data) ? mi : root->data;
    else if (level > 0) {
        minimum_BFS(root->left, level - 1,mi);
        minimum_BFS(root->right, level - 1,mi);
    }
}

void sum_BFS(Node* root,int level,int& sum)
{
    if (root == NULL)
        return;
    if (level == 0)
        sum += root->data;
    else if (level > 0) {
        sum_BFS(root->left, level - 1,sum);
        sum_BFS(root->right, level - 1,sum);
    }
}

int height(Node* node)
{
    if (node == NULL)
        return 0;
    else {
        /* compute the height of each subtree */
        int lheight = height(node->left);
        int rheight = height(node->right);

        /* use the larger one */
        if (lheight > rheight) {
            return (lheight + 1);
        }
        else {
            return (rheight + 1);
        }
    }
}

int main() {
    int n,e,p,c;
    char d;
    unordered_map<int,Node*> tree;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> p;
        tree[i] = new Node(p);
    }
    cin >> e;
    for (int i=0;i<e;i++)
    {
        cin >> d >> p >> c;
        if (d == 'L')
            tree[p]->left = tree[c];
        else
            tree[p]->right = tree[c];
        tree[c]->height = tree[p]->height + 1;
    }
    int h = height(tree[0]),mi = 100000;
    int l = tree[0]->data % h;
    minimum_BFS(tree[0],l,mi);
    int k = mi % h;
    if (!k) k=1;

    int sum = 0;
    string code = "";
    for (int i=0;i<h;i+=k)
    {
        sum  = 0;
        sum_BFS(tree[0],i,sum);
        code += to_string(sum);
    }
    cout << code;
    return 0;
}
