#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<pair<int, int>, int> ref;

    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        ref[{a, b}]++;
    }

    int maxi = INT_MIN;
    for (auto it : ref)
    {
        if (it.second > maxi)
        {
            maxi = it.second;
        }
    }
    cout << maxi << endl;
    return 0;
}
