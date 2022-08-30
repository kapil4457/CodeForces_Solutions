#include <bits/stdc++.h>
using namespace std;

int check(string &str, int i, char c)
{
    int ans = 0;
    for (int j = i; j < str.size(); j++)
    {
        if (str[j] == c)
        {
            ans++;
        }
        else
        {
            break;
        }
    }

    return ans;
}

int main()
{

    string temp;
    cin >> temp;

    int i = 0;
    string t = "NO";

    while (i < temp.size())
    {
        if (temp[i] == '1')
        {
            int ans = check(temp, i, '1');
            if (ans >= 7)
            {
                t = "YES";
                break;
            }
            i += ans;
        }
        if (temp[i] == '0')
        {

            int ans = check(temp, i, '0');
            if (ans >= 7)
            {
                t = "YES";
                break;
            }
            i += ans;
        }
    }
    cout << t << endl;

    return 0;
}