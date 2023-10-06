#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
vector<char> letters;
vector<string> combinations;
vector<bool> visited;

void rec(string& cur)
{
    if (cur.size() == m)
    {
        string temp = cur;
        sort(temp.begin(),temp.end());
        if (find(combinations.begin(),combinations.end(),temp) == combinations.end()) {
            combinations.push_back(temp);
        }
        return;
    }
    for (int i=0;i<n;i++)
    {
        if (!visited[i])
        {
            cur += letters[i];
            visited[i] = 1;
            rec(cur);
            visited[i] = 0;
            cur = cur.substr(0,cur.size() - 1);
        }
    }
}

int main() {
    cin >> n >> m;
    letters.resize(n);
    visited.resize(n,0);

    for (int i=0;i<n;i++)
        cin >> letters[i];

    string cur = "";
    rec(cur);

    sort(combinations.begin(),combinations.end());
    for (int i=0;i<combinations.size();i++)
        cout << combinations[i] << '\n';
    return 0;
}
