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

int isValid(int a, int b, int c, int d)
{
    if (a < c && b < d)
    {
        return true;
    }
    return false;
}

void markThem(vector<pair<int, int>> &vec, vector<vector<int>> &possible)
{

    for (auto it : vec)
    {
        possible[it.first][it.second] = 1;
    }
}
int main()
{
    ll n = 3, m = 4, k = 1000000000000000000;
    cin >> n >> m >> k;
    vector<vector<ll>> ref(n, vector<ll>(m));
    // vector<vector<ll>> ref = {{1, 3, 3, 3}, {0, 3, 2, 2}, {3, 0, 1, 1}};

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> ref[i][j];
        }
    }

    queue<pair<pair<ll, vector<pair<int, int>>>, pair<ll, ll>>> q;

    vector<vector<int>> possible(n, vector<int>(m, 0));

    q.push({{ref[0][0], {}}, {0, 0}});
    ll r[] = {0, 1};
    ll c[] = {1, 0};
    ll ans = 0;
    while (!q.empty())
    {
        ll xorT = q.front().first.first;
        ll i = q.front().second.first;
        ll j = q.front().second.second;
        vector<pair<int, int>> thisVec = q.front().first.second;
        q.pop();
        if (i == n - 1 && j == m - 1)
        {
            if (xorT == k)
            {
                ans++;
                markThem(thisVec, possible);
            }
            continue;
        }

        if (possible[i][j])
        {
            markThem(thisVec, possible);
            ans++;
            continue;
        }
        thisVec.push_back({i, j});
        for (ll l = 0; l < 2; l++)
        {
            ll newR = i + r[l];
            ll newC = j + c[l];

            if (isValid(newR, newC, n, m))
            {
                q.push({{xorT ^ ref[newR][newC], thisVec}, {newR, newC}});
            }
        }
    }
    cout << ans << endl;
    return 0;
}