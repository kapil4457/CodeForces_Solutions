#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;

void solve()
{

    long long int n, i, j, k;
    cin >> n;

    cin >> k;
    long long int keep = n, v;
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            v = i;
            break;
        }
    }
    k--;
    n += v;
    n += (2 * k);
    cout << n << endl;
}
int main()
{
    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++)
    {
        solve();
    }
    return 0;
}