#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n,k;

int rec(int count,int size)
{
    if (size == n)
    {
        if(count == k)
            return 1;
        else
            return 0;
    }
    return rec(count,size+1) + rec(count+1,size+1);
}

int main() {
    cin >> n >> k;
    cout << rec(0,0);
    return 0;
}

