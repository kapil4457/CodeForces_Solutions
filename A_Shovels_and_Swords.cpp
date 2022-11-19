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

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        cout << min(a, min(b, (a + b) / 3)) << endl;
    }
    return 0;
}