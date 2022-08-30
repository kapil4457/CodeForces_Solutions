#include <bits/stdc++.h>
using namespace std;
int main()
{
    // i -->row
    // j -->column
    int n = 3;
    int m = 3;
    // cin >> m;
    // cin >> n;

    vector<vector<int>> v(m, vector<int>(n, 0));
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] != 1)
            {
                if (i + 1 < m)
                {
                    v[i][j] = 1;
                    v[i + 1][j] = 1;
                    ans++;
                }
                else if (j + 1 < n)
                {
                    v[i][j] = 1;
                    v[i][j + 1] = 1;
                    ans++;
                }
            }
        }
    }

    cout << ans;

    return 0;
}