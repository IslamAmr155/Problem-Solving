#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool second (const pair<int,int>& a,const pair<int,int>& b) {
    return (a.second > b.second);
}

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> tasks(n);
    for (int i=0;i<n;i++)
        cin >> tasks[i].first;
    for (int i=0;i<n;i++)
        cin >> tasks[i].second;
    sort(tasks.begin(),tasks.end(), second);
    long long penalty = 0;
    int time = 0;
    bool flag = 0;
    vector<int> timetable(n,-1);
    for (int i=0;i<n;i++)
    {
        flag = 0;
        time = tasks[i].first - 1;
        if (timetable[time] == -1) {
            timetable[time] = 1;
            flag = 1;
        }
        else {
            while (time >= 0) {
                if (timetable[time] == -1) {
                    timetable[time] = 1;
                    flag = 1;
                    break;
                }
                time--;
            }
            if (!flag)
                penalty += tasks[i].second;
        }
    }
    cout << penalty;
    return 0;
}
