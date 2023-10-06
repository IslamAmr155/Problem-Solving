#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

struct Node{
    int data;
    Node* left = nullptr;
    Node* right = nullptr;
    Node* parent = nullptr;
    Node (int x) {data = x;}
};

void insert (Node*& root,Node* z)
{
    Node* y = nullptr;
    Node* x = root;
    while (x != nullptr)
    {
        y = x;
        if (z->data < x->data)
            x = x->left;
        else
            x = x->right;
    }
    z->parent = y;
    if (y == nullptr)
        root = z;
    else if (z->data < y->data)
        y->left = z;
    else
        y->right = z;
}

Node* search (Node* root,const int& key,int& v)
{
    while (root != nullptr && key != root->data)
    {
        v++;
        if (key < root->data)
            root = root->left;
        else
            root = root->right;
    }
    v++;
    return root;
}

int main() {
    int n,q,d,id,v;
    Node* dept_tree = nullptr;
    unordered_map<int,Node*> id_trees;

    cin >> n >> q;

    for (int i=0;i<n;i++)
    {
        cin >> d >> id;
        if (id_trees.find(d) == id_trees.end())
        {
            insert(dept_tree, new Node(d));
            id_trees[d] = nullptr;
        }
        insert(id_trees[d],new Node(id));
    }
    for (int i=0;i<q;i++)
    {
        cin >> d >> id;
        v = 0;
        if (!search(dept_tree,d,v))
            cout << --v << " " << 0 << '\n';
        else if (!search(id_trees[d],id,v))
        {
            cout << --v << " " << 0 << '\n';
        }
        else
            cout << v << " " << 1 << '\n';
    }
    return 0;
}