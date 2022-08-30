#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> ref(5, vector<int>(5));
    int r = 0;
    int c = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> ref[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (ref[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
        cout << endl;
    }
    int midr = 2;
    int midc = 2;

    int ans = abs(midr - r) + abs(midc - c);
    cout << ans << endl;

    return 0;
}