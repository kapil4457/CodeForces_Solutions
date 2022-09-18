#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v, a, b;
        int c;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            if (c % 2 == 0)
            {
                a.push_back(c);
            }
            else
            {
                b.push_back(c);
            }
        }

        for (int i = 0; i < a.size(); i++)
        {
            v.push_back(a[i]);
        }
        for (int i = 0; i < b.size(); i++)
        {
            v.push_back(b[i]);
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (__gcd(v[i], 2 * v[j]) > 1)
                    ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}