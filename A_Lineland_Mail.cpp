#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << arr[1] - arr[0] << " " << arr[n - 1] - arr[0] << endl;
        }
        else if (i == n - 1)
        {
            cout << arr[n - 1] - arr[n - 2] << " " << arr[n - 1] - arr[0] << endl;
        }
        else
        {
            cout << min(arr[i + 1] - arr[i], arr[i] - arr[i - 1]) << " " << max(arr[i] - arr[0], arr[n - 1] - arr[i]) << endl;
        }
    }
}