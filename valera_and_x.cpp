#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;

    vector<vector<char>> ref(n, vector<char>(n));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {

            cin >> ref[i][j];
        }
    }

    // ref[0][0] = 'w';
    // ref[0][1] = 's';
    // ref[0][2] = 'w';
    // ref[1][0] = 'w';
    // ref[1][1] = 'w';
    // ref[1][2] = 's';
    // ref[2][0] = 'w';
    // ref[2][1] = 's';
    // ref[2][2] = 'w';

    char diagonal = ref[0][0];
    char non_diagonal = ref[0][1];

    string ans = "YES";
    if (diagonal == non_diagonal)
    {
        ans = "NO";
    }
    for (ll i = 0; i < n; i++)
    {

        if (ans == "NO")
        {
            break;
        }

        for (ll j = 0; j < n; j++)
        {
            if ((i == j || i + j == n - 1) && ref[i][j] != diagonal)
            {
                ans = "NO";
                break;
            }
            if ((i != j && i + j != n - 1) && ref[i][j] != non_diagonal)
            {
                ans = "NO";
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}