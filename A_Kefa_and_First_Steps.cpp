#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = -1;
    int start = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            ans = max(i - start, ans);
            start = i;
        }
    }

    ans = max(n - start, ans);
    cout << ans;
    return 0;
}