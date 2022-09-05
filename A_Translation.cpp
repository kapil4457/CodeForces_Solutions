#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.length() != s2.length())
    {
        cout << "NO" << endl;
    }
    else
    {

        int i = 0;
        int j = s2.length() - 1;
        bool ans = true;
        while (i != s1.length() && j != -1)
        {
            if (s1[i] != s2[j])
            {
                ans = false;
                break;
            }
            else
            {
                i++;
                j--;
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

    return 0;
}