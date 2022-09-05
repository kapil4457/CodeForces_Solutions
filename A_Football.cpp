#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> ref;

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        ref[name]++;
    }

    int maxi = INT_MIN;
    string ans;
    for (auto it : ref)
    {
        if (it.second > maxi)
        {
            maxi = it.second;
            ans = it.first;
        }
    }

    cout << ans;
    return 0;
}