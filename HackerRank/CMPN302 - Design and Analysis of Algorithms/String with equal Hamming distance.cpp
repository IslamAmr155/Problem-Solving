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

string str1,str2;

int main() {
    cin >> str1 >> str2;
    int n = str1.size(),c=0;
    for (int i=0,j=0;i<n && j<n;i++,j++)
    {
        if (str1[i] != str2[j])
            c++;
    }
    if (c % 2 == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}