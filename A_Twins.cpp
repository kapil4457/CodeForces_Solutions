#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll total = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        total += v[i];
    }

    sort(v.begin(), v.end(), greater<ll>());
    ll count = 0;
    ll CurrSum = 0;
    for (ll i = 0; i < n; i++)
    {
        CurrSum += v[i];
        count++;
        if (CurrSum > total / 2)
        {
            break;
        }
    }
    cout << count << endl;

    return 0;
}