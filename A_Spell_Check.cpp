#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string name = "Timur";
    map<char, int> ref;
    for (int i = 0; i < name.length(); i++)
    {
        ref[name[i]]++;
    }

    while (t--)
    {
        int len;
        cin >> len;
        string s;
        cin >> s;
        if (len != name.length())
        {
            cout << "NO" << endl;
        }
        else
        {
            map<char, int> ref2;
            for (int i = 0; i < len; i++)
            {
                ref2[s[i]]++;
            }
            bool ans = true;
            for (int i = 0; i < name.length(); i++)
            {
                if (ref[name[i]] != ref2[name[i]])
                {
                    ans = false;
                }
            }

            if (ans == false)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}