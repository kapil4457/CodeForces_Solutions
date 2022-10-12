#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pre(n);
    pre[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    int ans = n;

    for (int i = 0; i < n; i++)
    {
        int sum = pre[i];
        sum += sum;

        int curr = (i + 1), last = i;
        int idx;
        while (binary_search(pre.begin(), (pre.begin() + n), sum))
        {
            idx = lower_bound(pre.begin(), pre.begin() + n, sum) - pre.begin();
            sum += pre[i];
            curr = max(curr, idx - last);
            last = idx;
        }

        if (last == (n - 1))
        {
            ans = min(ans, curr);
        }
    }

    cout << ans << endl;
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}