#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{
    ll n;
    cin >> n;

    ll ans = 0;

    ll t1 = floor(n / 100);
    ans += t1;
    n -= (t1 * 100);

    t1 = floor(n / 20);
    ans += t1;
    n -= (t1 * 20);

    t1 = floor(n / 10);
    ans += t1;
    n -= (t1 * 10);

    t1 = floor(n / 5);
    ans += t1;
    n -= (t1 * 5);

    ans += n;

    cout << ans << endl;

    return 0;
}