#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;

int main()
{
    long long int n, a, x, i;
    cin >> n;
    while (n--)
    {
        scanf("%lld", &a);
        x = sqrt(a);
        for (i = 2; i * i < x; i++)
            if (x % i == 0)
                break;
        if (i * i > x && a > 1 && x * x == a)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}