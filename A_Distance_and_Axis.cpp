#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{
    int k, n, t;

    cin >> t;
    for (; t--;)
    {
        cin >> n >> k;

        if (n < k)
            cout << k - n << endl;

        else if (n % 2 == k % 2)
            cout << 0 << endl;

        else
            cout << 1 << endl;
    }

    return 0;

    return 0;
}