#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a, int b)
{
    int result = 1;
    while (b > 0)
    {
        if (b % 2)
            result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<vector<char>> v(n, vector<char>(m));
        int r = 0, d = 0;
        for (int i = 0; i < n; i++)

        {
            for (int j = 0; j < m; j++)
            {

                cin >> v[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < m; i++)
        {

            if (v[n - 1][i] == 'D')
            {
                ans++;
            }
        }
        for (int i = 0; i < n; i++)
        {

            if (v[i][m - 1] == 'R')
            {
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}