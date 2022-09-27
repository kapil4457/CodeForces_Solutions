#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{
    int n = 5;
    cin >> n;

    vector<int> ref(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ref[i];
    }
    sort(ref.begin(), ref.end());

    for (int i = 0; i < n - 2; i++)
    {
        if (ref[i] + ref[i + 1] > ref[i + 2])
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}