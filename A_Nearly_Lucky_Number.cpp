#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    string s = to_string(n);

    int luckyNumber = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            luckyNumber++;
        }
    }

    if (luckyNumber == 4 || luckyNumber == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}