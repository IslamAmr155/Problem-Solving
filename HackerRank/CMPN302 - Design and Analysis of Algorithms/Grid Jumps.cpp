#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<int>> grid(3,vector<int>(3));
vector<vector<bool>> visited(3,vector<bool>(3,0));

void rec(int i,int j,int c,int& ma)
{
    if (i == 2 && j == 0)
    {
        ma = max(c+grid[i][j],ma);
        return;
    }
    if (!visited[i][j])
    {
        visited[i][j] = 1;
        c += grid[i][j];
        if (i > 0 && !visited[i-1][j])
            rec(i-1,j,c,ma);
        if (i < 2 && !visited[i+1][j])
            rec(i+1,j,c,ma);
        if (i > 0 && j > 0 && !visited[i-1][j-1])
            rec(i-1,j-1,c,ma);
        if (i > 0 && j < 2 && !visited[i-1][j+1])
            rec(i-1,j+1,c,ma);
        if (i < 2 && j > 0 && !visited[i+1][j-1])
            rec(i+1,j-1,c,ma);
        if (i < 2 && j < 2 && !visited[i+1][j+1])
            rec(i+1,j+1,c,ma);
        c -= grid[i][j];
        visited[i][j] = 0;
    }
}

int main() {
    for (int i=0;i<3;i++)
        for (int j=0;j<3;j++)
            cin >> grid[i][j];
    int ma = INT_MIN;
    rec(0,0,0,ma);
    cout << ma;
    return 0;
}
