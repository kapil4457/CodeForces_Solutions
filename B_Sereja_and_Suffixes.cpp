#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, int> ref;
    vector<int> v1(n);
    for (int i = n - 1; i >= 0; i--)
    {
        ref[v[i]]++;
        v1.push_back(ref.size());
    }

    reverse(v1.begin(), v1.end());

    int a;

    for (int i = 0; i < m; i++)
    {
        cin >> a;
        cout << v1[a - 1] << endl;
    }

    return 0;
}