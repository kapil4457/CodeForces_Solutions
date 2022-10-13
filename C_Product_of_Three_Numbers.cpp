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
        int n;
        cin >> n;
        int a = 0, b = 0, c = 0;
        bool check = false;

        for (int i = 2; i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (a == 0)
                {
                    a = i;
                    n /= i;
                }
                else if (b == 0)
                {
                    b = i;
                    n /= i;
                    c = n;
                    check = true;
                }
            }
        }

        if (check)
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}