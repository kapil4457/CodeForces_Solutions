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
        int n;
        cin >> n;
        vector<int> r(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
        }
        int zeros = 0, ones = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            if (c[i] == 0)
            {
                zeros++;
            }
            else
            {
                ones++;
            }
        }
        if (is_sorted(r.begin(), r.end()))
        {
            cout << "Yes" << endl;
            continue;
        }
        if (zeros && ones)
        {
            cout << "Yes" << endl;
            continue;
        }

        cout << "No" << endl;
    }

    return 0;
}