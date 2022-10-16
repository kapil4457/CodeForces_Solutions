#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{
    int n, k, first;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> pre(n);
    cin >> first;
    v[0] = first;
    pre[0] = first;
    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
        pre[i] = v[i] + pre[i - 1];
    }

    vector<int> kSum(n, 0);
    kSum[k - 1] = pre[k - 1];
    int j = 0;
    for (int i = k; i < n; i++)
    {
        kSum[i] = pre[i] - pre[j];
        j++;
    }
    int mini = INT_MAX;
    int idx = -1;
    for (int i = k - 1; i < n; i++)
    {
        if (kSum[i] < mini)
        {
            mini = kSum[i];
            idx = i - k + 2;
        }
    }

    cout << idx;

    return 0;
}