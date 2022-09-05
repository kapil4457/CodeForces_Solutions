#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s = to_string(n);
    int i = 0;
    bool check = true;
    while (i < s.length())
    {

        if (i == s.length() - 1 && s[i] == '1')
        {
            break;
        }
        if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
        {
            i += 3;
        }

        else if (s[i] == '1' && s[i + 1] == '4')
        {
            i += 2;
        }

        else if (s[i] == '1' && s[i + 1] == '1')
        {
            i++;
        }
        else
        {
            check = false;
            break;
        }
    }

    if (check == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}