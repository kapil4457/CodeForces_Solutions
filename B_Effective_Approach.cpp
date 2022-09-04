#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> numbers(n);
    map<ll, ll> ref;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        ref[temp] = i;

        numbers[i] = temp;
    }
    ll m;
    cin >> m;
    vector<ll> queries(m);

    for (ll i = 0; i < m; i++)
    {
        cin >> queries[i];
    }

    ll leftToRight = 0;
    ll rightToLeft = 0;

    for (ll i = 0; i < m; i++)
    {
        ll index = ref[queries[i]];

        leftToRight += index + 1;
        rightToLeft += n - index;
    }

    cout << leftToRight << " " << rightToLeft << endl;
    return 0;
}