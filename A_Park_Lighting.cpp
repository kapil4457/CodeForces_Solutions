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
        int n, m;
        cin >> n >> m;

        int lamps = 0;

        if (n % 2 == 0)
        {
            lamps += (n / 2) * m;
        }
        else
        {

            lamps += (n / 2) * m;

            if (m % 2 == 0)
            {
                lamps += (m / 2);
            }
            else
            {
                lamps += (m / 2) + 1;
            }
        }

        cout << lamps << endl;
    }
    return 0;
}