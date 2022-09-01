#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> ans(3, vector<int>(3, 1));
    vector<vector<int>> ref(3, vector<int>(3));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> ref[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (ref[i][j] % 2 == 0)
            {
                continue;
            }
            else
            {
                ans[i][j] = abs(ans[i][j] - 1);
                if (i - 1 >= 0)
                    ans[i - 1][j] = abs(ans[i - 1][j] - 1);

                if (i + 1 < 3)
                    ans[i + 1][j] = abs(ans[i + 1][j] - 1);
                if (j + 1 < 3)
                    ans[i][j + 1] = abs(ans[i][j + 1] - 1);

                if (j - 1 >= 0)
                    ans[i][j - 1] = abs(ans[i][j - 1] - 1);
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}