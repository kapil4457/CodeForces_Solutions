#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> ref(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ref[i].first >> ref[i].second;
    }

    int maxi = INT_MIN;
    int passangerCount = 0;
    for (int i = 0; i < n; i++)
    {
        passangerCount -= ref[i].first;
        passangerCount += ref[i].second;

        if (passangerCount > maxi)
        {
            maxi = passangerCount;
        }
    }
    cout << maxi << endl;
    return 0;
}