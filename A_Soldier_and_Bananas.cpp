#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int ans = 0;
    for (int i = 1; i <= w; i++)
    {
        int cost = i * k;

        if (cost <= n)
        {
            n -= cost;
        }
        else
        {
            int diff = cost - n;
            ans += diff;
            n = 0;
        }
    }

    cout << ans << endl;

    return 0;
}