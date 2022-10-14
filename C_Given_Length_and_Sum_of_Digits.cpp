#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{

    int m = 1, s = 0;
    cin >> m >> s;
    int tempS = s;

    if (s == 0 && (m > 1 || m == 0))
    {
        cout << -1 << " " << -1 << endl;
        return 0;
    }
    else if (s == 0 && m == 1)
    {
        cout << 0 << " " << 0 << endl;
        return 0;
    }
    // We get the maximum number
    string maxi = "";
    for (int i = 0; i < m; i++)
    {
        if (s != 0)
        {
            int temp = min(9, s);
            string temp1 = to_string(temp);
            maxi += temp1;
            s -= temp;
        }
        else
        {
            maxi.push_back('0');
        }
    }

    if (s)
    {
        cout << -1 << " " << -1 << endl;
        return 0;
    }

    string mini = "";

    for (int i = m - 1; i >= 0; i--)
    {
        mini.push_back(maxi[i]);
    }

    int j = 0;
    while (mini[j] == '0')
    {
        j++;
    }

    mini[0]++;
    mini[j]--;

    cout << mini << " " << maxi << endl;

    return 0;
}