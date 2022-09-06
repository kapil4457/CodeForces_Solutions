#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s = 2, n = 2;
    cin >> s >> n;

    vector<vector<int>> ref(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        cin >> ref[i][0] >> ref[i][1];
    }

    // ref[0][0] = 1;
    // ref[0][1] = 99;
    // ref[1][0] = 100;
    // ref[1][1] = 0;

    sort(ref.begin(), ref.end());
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (ref[i][0] < s)
        {
            s += ref[i][1];
        }
        else
        {
            ans = false;
            break;
        }
    }

    if (ans == false)
    {
        cout << "NO"
             << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}