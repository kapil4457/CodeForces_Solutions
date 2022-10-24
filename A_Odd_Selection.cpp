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
const int N = 2e5 + 5;

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        int a[N], f[2];
        f[0] = f[1] = 0;
        cin >> n >> x;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            f[a[i] % 2]++;
        }
        bool flag = 0;
        for (int i = 1; i <= f[1] && i <= x; i += 2) // Fix no of odd
        {
            int have = f[0], need = x - i;
            if (need <= f[0])
                flag = 1;
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}