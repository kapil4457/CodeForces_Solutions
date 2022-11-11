#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a, int b)
{
    int result = 1;
    while (b > 0)
    {
        if (b % 2)
            result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, int> row, col;
        vector<vector<int>>
            v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
                if (v[i][j] == 1)
                {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        int player = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == 0 && !row[i] && !col[j])
                {
                    player = !player;
                    row[i]++;
                    col[j]++;
                }
            }
        }

        if (player == 0)
        {
            cout << "Vivek" << endl;
        }
        else
        {
            cout << "Ashish" << endl;
        }
    }

    return 0;
}