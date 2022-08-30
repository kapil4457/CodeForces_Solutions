#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int ans = 0;
    vector<string> str(t);
    for (int i = 0; i < t; i++)
    {
        cin >> str[i];
    }

    for (auto ele : str)
    {
        for (int i = 0; i < ele.size(); i++)
        {
            if (ele[i] == '+')
            {
                ans++;
                break;
            }
            else if (ele[i] == '-')
            {
                ans--;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}