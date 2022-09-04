#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    pair<int, int> p;
    int low = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        if (i == n - 1)
        {
            int rightDiff = abs(v[i] - v[0]);
            if (rightDiff < low)
            {
                low = rightDiff;
                p.first = i + 1;
                p.second = 1;
            }
        }
        else
        {
            int rightDiff = abs(v[i] - v[i + 1]);
            if (rightDiff < low)
            {
                low = rightDiff;
                p.first = i + 1;
                p.second = i + 2;
            }
        }
    }

    cout << p.first << " " << p.second << endl;
    return 0;
}