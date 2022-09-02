#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int col;
        cin >> col;
        vector<vector<char>> v(2, vector<char>(col));
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> v[i][j];
            }
        }

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (v[i][j] == 'B')
                {
                    v[i][j] = 'G';
                }
            }
        }
        bool ans = true;
        for (int i = 0; i < col; i++)
        {
            if (v[0][i] != v[1][i])
            {
                ans = false;
            }
        }

        if (ans == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}