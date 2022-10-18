#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>

ll power(ll a, ll b)
{
    ll result = 1;
    while (b > 0)
    {
        if (b % 2)
            result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll total = 0;
        ll v = 8;
        for (ll i = 1; i <= (n / 2); i++)
        {
            total += (v * (i));
            v += 8;
        }

        cout << total << endl;
    }

    return 0;
}