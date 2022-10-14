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
        ll n;
        cin >> n;
        bool ansFound = false;
        for (int k = 2; k <= 1e8; k++)
        {
            ll p = pow(2, k);
            p--;

            if (n % p == 0)
            {
                cout << n / p << endl;
                ansFound = true;
                break;
            }
        }
        if (ansFound)
        {
            continue;
        }
    }
    return 0;
}