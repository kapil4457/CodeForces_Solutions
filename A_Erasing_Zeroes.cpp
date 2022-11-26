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
        string str;
        cin >> str;
        ll n = str.length();
        ll numberOfOnes = 0;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
            {
                numberOfOnes++;
            }
        }

        if (numberOfOnes <= 1)
        {
            cout << 0 << endl;
        }
        else
        {
            int firstPos = 0;

            for (int i = 0; i < n; i++)
            {
                if (str[i] == '1')
                {
                    firstPos = i;
                    numberOfOnes--;
                    break;
                }
            }

            int ans = 0;
            int j = firstPos + 1;
            while (numberOfOnes)
            {
                if (str[j] == '1')
                {
                    ans += abs(firstPos - j) - 1;
                    firstPos = j;
                    numberOfOnes--;
                }
                j++;
            }

            cout << ans << endl;
        }
    }

    return 0;
}