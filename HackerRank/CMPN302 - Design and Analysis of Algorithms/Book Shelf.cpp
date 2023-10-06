#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <numeric>
using namespace std;


int main() {
    int n,d,m,a;
    long long sum = 0;
    cin >> n >> d >> m;
    if (m == 2)
    {
        unordered_map<int,int> books;
        for (int i=0;i<n;i++)
        {
            cin >> a;
            books[a]++;
            if (books.find(a - d) != books.end())
                sum += books[a - d];
        }
    }
    else
    {
        unordered_map<int,vector<int>> books;
        for (int i=0;i<n;i++)
        {
            cin >> a;
            books[a];
            if (books.find(a-d) != books.end())
                books[a].emplace_back(books[a-d].size());
            else
                books[a].emplace_back(0);
            if (books.find(a-d) != books.end() && books.find(a-2*d) != books.end())
                sum += accumulate(books[a-d].begin(),books[a-d].end(),0);
        }
    }
    cout << sum;
    return 0;
}
