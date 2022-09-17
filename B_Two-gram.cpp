#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    map<string, int> ref;

    for (int i = 0; i < n - 1; i++)
    {
        string temp = "";
        temp.push_back(str[i]);
        temp.push_back(str[i + 1]);
        ref[temp]++;
    }
    string ans = "";
    int maxOccurance = INT_MIN;
    for (auto it : ref)
    {
        if (it.second > maxOccurance)
        {
            maxOccurance = it.second;
            ans = it.first;
        }
    }

    cout << ans;

    return 0;
}