#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    map<char, int> ref1;
    for (int i = 0; i < s1.size(); i++)
    {
        ref1[s1[i]]++;
    }
    for (int j = 0; j < s2.size(); j++)
    {
        ref1[s2[j]]++;
    }
    bool extra = false;
    for (int k = 0; k < s3.size(); k++)
    {
        if (ref1.find(s3[k]) == ref1.end())
        {
            extra = true;
        }
        else
        {

            ref1[s3[k]]--;
        }
    }

    if (extra == true)
    {
        cout << "NO" << endl;
    }
    else
    {

        for (auto it : ref1)
        {
            if (it.second != 0)
            {
                extra = true;
            }
        }

        if (extra == true)
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