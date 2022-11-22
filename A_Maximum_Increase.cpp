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
    ll i, j, k;
    ll n;

    cin >> n;
    ll a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll count = 1, max = 1;

    for (i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
            count++;
        else
        {
            if (count > max)
                max = count;

            count = 1;
        }
    }

    if (count > max)
        max = count;

    cout << max;

    return 0;
}