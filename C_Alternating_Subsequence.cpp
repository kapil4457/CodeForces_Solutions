#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll a[n + 1];
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        set<ll> s;
        ll i = 1;
        ll sum = 0;
        while (i <= n)
        {
            if (a[i] < 0)
            {
                while (a[i] < 0 && i <= n)
                {
                    s.insert(a[i]);
                    i++;
                }
            }
            else
            {
                while (a[i] > 0 && i <= n)
                {
                    s.insert(a[i]);
                    i++;
                }
            }

            auto it = s.rbegin();
            sum = sum + *it;
            // watch2(sum,*it);
            s.clear();
        }

        cout << sum << "\n";
    }
    return 0;
}