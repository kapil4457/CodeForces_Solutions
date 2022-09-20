#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
#define LL "%I64d"

int main()
{
    const int maxn = 100010;

    int n, m;

    long long y[maxn], z[maxn];
    scanf("%d", &n);
    for (int a = 1; a <= n; a++)
    {
        int v;
        scanf("%d", &v);
        y[a] = z[a] = v;
    }
    sort(y + 1, y + n + 1);
    for (int a = 1; a <= n; a++)
        z[a] += z[a - 1], y[a] += y[a - 1];
    scanf("%d", &m);
    for (int a = 1; a <= m; a++)
    {
        int opt, l, r;
        scanf("%d%d%d", &opt, &l, &r);
        if (opt == 1)
            printf(LL "\n", z[r] - z[l - 1]);
        else
            printf(LL "\n", y[r] - y[l - 1]);
    }
    return 0;
}