#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // R R G

    string s;
    cin >> s;
    int removal = 0;
    for (int i = 1; i < n; i++)
    {
        if (i >= s.length())
        {
            break;
        }
        if (s.length() == 1)
            break;
        if (s[i - 1] == s[i])
        {
            s.erase(i, 1);
            i--;
            removal++;
        }
    }
    cout << removal << endl;

    return 0;
}