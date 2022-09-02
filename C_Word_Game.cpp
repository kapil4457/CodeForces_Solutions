#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<string>> ref;
        map<string, int> ref2;
        for (int i = 0; i < 3; i++)
        {
            vector<string> s;
            for (int j = 0; j < n; j++)
            {
                string temp;
                cin >> temp;
                s.push_back(temp);
                ref2[temp]++;
            }
            ref.push_back(s);
        }

        int a = 0;
        int b = 0;
        int c = 0;
        for (int i = 0; i < ref.size(); i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0)
                {
                    if (ref2[ref[i][j]] == 1)
                    {
                        a += 3;
                    }
                    if (ref2[ref[i][j]] == 2)
                    {
                        a += 1;
                    }
                }

                if (i == 1)
                {
                    if (ref2[ref[i][j]] == 1)
                    {
                        b += 3;
                    }
                    if (ref2[ref[i][j]] == 2)
                    {
                        b += 1;
                    }
                }
                if (i == 2)
                {
                    if (ref2[ref[i][j]] == 1)
                    {
                        c += 3;
                    }
                    if (ref2[ref[i][j]] == 2)
                    {
                        c += 1;
                    }
                }
            }
        }

        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}