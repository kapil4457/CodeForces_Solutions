#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    map<char, int> ref;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        ref[s[i]]++;
    }

    bool check = true;

    for (auto it : ref)
    {
        if (it.second % t != 0)
        {
            check = false;
        }
    }
    // check gets false if there is no ratio occurance in each character
    if (check == false)
    {
        cout << -1;
    }
    else
    {
        string ans = "";
        int count = s.length();

        while (count != 0)
        {
            for (auto it : ref)
            {
                int temp = it.second / t;
                if (temp == 0)
                {
                    temp++;
                }

                char ThisChar = it.first;
                for (int i = 0; i < temp; i++)
                {
                    ans += ThisChar;
                }
                ref[ThisChar] -= temp;
                count -= temp;
            }
        }

        cout << ans;
    }

    return 0;
}