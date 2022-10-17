#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
long long first[1010000], last[1010000];

int main()
{

    ll k, prime, m, tc, num, t = 4;

    string arr;
    cin >> arr;
    ll ln = arr.size();

    ll cnt = 0;
    for (ll i = 1; i <= ln - 1; i++)
    {
        if (arr[i] == 'v' && arr[i - 1] == 'v')
            cnt++;
        first[i] = cnt;
    }

    cnt = 0;
    for (ll i = ln - 1; i > 0; i--)
    {
        if (arr[i] == 'v' && arr[i + 1] == 'v')
            cnt++;
        last[i] = cnt;
    }

    ll ans = 0;
    for (ll i = 0; i < ln; i++)
    {
        if (arr[i] == 'o')
        {
            ans += first[i - 1] * last[i + 1];
        }
    }

    cout << ans << endl;
}