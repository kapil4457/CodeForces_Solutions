#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> v(s.length());

    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            v.push_back(1);
        }
        if (s[i] == '2')
        {
            v.push_back(2);
        }
        if (s[i] == '3')
        {
            v.push_back(3);
        }
    }
    sort(v.begin(), v.end());

    string ans = "";
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
        {
            ans.append("1");
            if (i != v.size() - 1)
                ans.append("+");
        }
        if (v[i] == 2)
        {
            ans.append("2");
            if (i != v.size() - 1)
                ans.append("+");
        }
        if (v[i] == 3)
        {
            ans.append("3");
            if (i != v.size() - 1)
                ans.append("+");
        }
    }

    cout << ans;
    return 0;
}