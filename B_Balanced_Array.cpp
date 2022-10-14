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
        int check1 = n / 2;
        if (check1 % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int sum = 0;
            vector<int> even(check1);
            int t1 = 2;
            for (int i = 0; i < check1; i++)
            {
                sum += t1;
                even[i] = t1;
                t1 += 2;
            }

            vector<int> odd(check1);
            int t2 = 1;

            for (int i = 0; i < check1 - 1; i++)
            {
                odd[i] = t2;
                sum -= t2;
                t2 += 2;
            }

            odd[check1 - 1] = sum;
            cout << "YES" << endl;
            for (int i = 0; i < check1; i++)
            {
                cout << even[i] << " ";
            }
            for (int i = 0; i < check1; i++)
            {
                cout << odd[i] << " ";
            }

            cout << endl;
        }
    }
    return 0;
}