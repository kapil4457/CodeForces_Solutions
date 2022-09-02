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

    int best = v[0];
    int worst = v[0];
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] > best)
        {
            best = v[i];
            ans++;
        }

        else if (v[i] < worst)
        {
            worst = v[i];
            ans++;
        }
    }

    cout << ans;
    return 0;
}