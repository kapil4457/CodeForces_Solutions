#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    bool who = 0;

    while (n != 0 && m != 0)
    {
        n--;
        m--;
        who = !who;
    }

    if (who == 1)
    {
        cout << "Akshat";
    }
    else
    {
        cout << "Malvika";
    }
    return 0;
}