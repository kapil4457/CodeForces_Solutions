#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m, x, y;
        cin >> n >> m >> x >> y;

        char ref[n][m];

        for (ll i = 0; i < n; i++)

        {
            for (ll j = 0; j < m; j++)
            {
                cin >> ref[i][j];
            }
        }
        ll ans = 0;
        ll smallest_cost_to_cover_two_tiles = min(2 * x, y);
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (ref[i][j] == '.')
                {
                    if (j + 1 <= m - 1)
                    {
                        if (ref[i][j + 1] == '.')
                        {
                            ans += smallest_cost_to_cover_two_tiles;
                            ref[i][j] = '*';
                            ref[i][j + 1] = '*';
                        }
                        else
                        {
                            ans += x;
                            ref[i][j] = '*';
                        }
                    }
                    else
                    {
                        ans += x;
                        ref[i][j] = '*';
                    }
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}