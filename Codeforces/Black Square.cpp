#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a1, a2, a3, a4, cal = 0;
    string s;
    cin >> a1 >> a2 >> a3 >> a4 >> s;
    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i] - '0')
        {
        case 1:
            cal += a1;
            break;
        case 2:
            cal += a2;
            break;
        case 3:
            cal += a3;
            break;
        case 4:
            cal += a4;
            break;
        }
    }
    cout << cal;
}