#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> ref;
    int LeftOpen = 0;
    int RightOpen = 0;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> temp;
        cin >> temp.first >> temp.second;
        if (temp.first == 1)
            LeftOpen++;
        if (temp.second == 1)
        {
            RightOpen++;
        }

        ref.push_back(temp);
    }
    // pair<int, int> t1 = {0, 1};
    // pair<int, int> t2 = {1, 0};
    // pair<int, int> t3 = {0, 1};
    // pair<int, int> t4 = {1, 1};
    // pair<int, int> t5 = {0, 1};
    // ref.push_back(t1);
    // ref.push_back(t2);
    // ref.push_back(t3);
    // ref.push_back(t4);
    // ref.push_back(t5);

    int ans = 0;
    if (RightOpen > n / 2)
    {
        ans += (n - RightOpen);
    }
    else
    {
        ans += RightOpen;
    }
    if (LeftOpen > n / 2)
    {
        ans += (n - LeftOpen);
    }
    else
    {
        ans += LeftOpen;
    }

    cout << ans;
    return 0;
}
