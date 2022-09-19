#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()

{
    // ************ Method 1 ***************
    // ll n;
    // cin >> n;

    // vector<ll> v(n);
    // for (ll i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    // ll ans = 0;
    // for (ll i = 0; i < n; i++)
    // {
    //     if (v[i] != 0 && v[i] != -1 && v[i] != 1)
    //     {
    //         ans += abs(v[i]) - 1;

    //         if (v[i] > 0)
    //         {
    //             v[i] -= ans;
    //         }
    //         else
    //         {
    //             v[i] += ans;
    //         }
    //     }
    // }

    // map<ll, ll> ref;
    // for (ll i = 0; i < n; i++)
    // {
    //     ref[v[i]]++;
    // }

    // if (ref[-1] % 2 != 0)
    // {
    //     if (ref[0] != 0)
    //     {
    //         ans++;
    //         ref[0]--;
    //         ref[-1]++;
    //     }
    //     else
    //     {
    //         ans += 2;
    //         ref[-1]--;
    //     }
    // }

    // ans += ref[0];

    // cout << ans << endl;

    // **************** Method 2 *********************
    int n, a[100001];
    ll sum = 0;
    int pos = 0, neg = 0, zero = 0, k = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sort(a,a+n);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1 || a[i] == -1)
            continue;
        else if (a[i] < -1)
        {
            sum += abs(a[i] + 1);
            a[i] -= (a[i] + 1);
        }
        else if (a[i] > 1)
        {
            sum += a[i] - 1;
            a[i] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            zero++;
            a[i] = 1;
        }
        else if (a[i] == -1)
            neg++;
        else if (a[i] == 1)
            pos++;
    }
    sum += zero;
    pos += zero;
    // zero = 0;
    if (neg % 2 == 1)
    {
        if (zero > 0)
            pos--;
        else
            sum += 2;
    }

    cout << sum << endl;
    return 0;
}