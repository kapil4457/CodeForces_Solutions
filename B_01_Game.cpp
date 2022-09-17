#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        map<char, int> ref;
        for (int i = 0; i < str.length(); i++)
        {
            ref[str[i]]++;
        }
        int mini = min(ref['1'], ref['0']);

        if (mini % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }
    return 0;
}