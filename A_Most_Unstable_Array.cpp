#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        if (n == 1)
        {
            cout << 0 << endl;
        }
        else if (n == 2)
        {
            cout << m << endl;
        }
        else
        {
            cout << 2 * m << endl;
        }
    }
    return 0;
}