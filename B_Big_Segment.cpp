#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;

    vector<pair<int, int>> v(n);

    ll maxi = LONG_LONG_MIN;
    ll mini = LONG_LONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll t1, t2;
        cin >> t1 >> t2;
        pair<ll, ll> temp;
        temp.first = t1;
        temp.second = t2;
        v[i] = temp;
        if (t1 < mini)
        {
            mini = t1;
        }
        if (maxi < t2)
        {
            maxi = t2;
        }
    }
    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        if (v[i].first == mini && v[i].second == maxi)
        {
            ans = i + 1;
            break;
        }
    }

    cout << ans;

    return 0;
}