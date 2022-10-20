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
    int t = 1;
    cin >> t;
    while (t--)
    {

        int n = 8, k = 7;
        cin >> n >> k;
        int mini = INT_MAX;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0 && i <= k)
            {
                mini = min(mini, n / i);
            }
            if (n % i == 0 && n / i <= k)
            {
                mini = min(mini, i);
            }
        }

        cout << mini << endl;
    }
    return 0;
}