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
    int n = 3, m = 3;
    cin >> n >> m;

    vector<vector<char>> v(n, vector<char>(m, '.'));

    for (int i = 0; i < n; i += 2)
    {
        for (int j = 0; j < m; j++)
        {
            v[i][j] = '#';
        }
    }

    // 0 --> right
    // 1 --> left
    int side = 0;
    for (int i = 1; i < n; i += 2)
    {
        if (side == 0)
        {
            v[i][m - 1] = '#';
            side = !side;
        }
        else
        {
            v[i][0] = '#';
            side = !side;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j];
        }

        cout << endl;
    }
    return 0;
}