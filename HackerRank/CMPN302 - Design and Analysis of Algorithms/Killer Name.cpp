#include <cmath>
#include <cstdio>
#include <queue>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;

int n;
string str1,str2,name;
unordered_map<string,bool> mem;

bool rec(int i,int j,int k)
{
    if (k == name.size() && i == str1.size() && j == str2.size())
    {
        return 1;
    }
    string  s= to_string(i)+ to_string(j)+ to_string(k);
    auto  ser= mem.find(s);

    if( ser != mem.end()){

        return ser->second;
    }

    bool a = 0,b =0;
    if (i < str1.size() && name[k] == str1[i])
        a = rec(i+1,j,k+1);
    if (j < str2.size() && name[k] == str2[j])
        b = rec(i,j+1,k+1);
    mem.insert({s,a||b});
    return a || b;
}

int main() {
    cin >> n;
    cin >> str1 >> str2;
    for (int i=0;i<n;i++)
    {
        cin >> name;
        mem.clear();
        cout  << rec(0,0,0) << '\n';
    }
    return 0;
}

