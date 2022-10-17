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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        for (int i = 0; i < k; i++)
        {
            if (b[i] < a[i])
            {
                break;
            }
            else
            {
                swap(a[i], b[i]);
            }
        }

        int total = accumulate(a.begin(), a.end(), 0);
        cout << total << endl;
    }
    return 0;
}