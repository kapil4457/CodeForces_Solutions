#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int r;
        if (a > b)
        {
            r = a - b;
        }
        else
        {
            r = b - a;
        }
        int n = r * 2;
        if (a > n || b > n || c > n)
        {
            cout << -1 << endl;
        }
        else
        {
            if (c + r <= n)
            {
                cout << c + r << endl;
            }
            else if (c - r <= n && c - r > 0)
            {
                cout << c - r << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}