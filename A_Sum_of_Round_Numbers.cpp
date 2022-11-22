#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a, int b)
{
    int result = 1;
    while (b > 0)
    {
        if (b % 2)
            result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        int count = 1;

        vector<string> v;

        int n = str.length();

        int zeros = 0;

        if (n == 1)
        {
            cout << count << endl;
            cout << str << endl;
        }
        else
        {
            for (int i = n - 1; i >= 1; i--)
            {
                if (str[i] != '0')
                {
                    string temp = "";
                    temp.push_back(str[i]);
                    for (int i = 0; i < zeros; i++)
                    {
                        temp.push_back('0');
                    }

                    v.push_back(temp);
                    str[i] = '0';
                    zeros++;
                }
                else
                {
                    zeros++;
                }
            }
            string temp = "";
            temp.push_back(str[0]);
            for (int i = 0; i < zeros; i++)
            {
                temp.push_back('0');
            }

            v.push_back(temp);

            cout
                << v.size() << endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }

            cout << endl;
        }
    }
    return 0;
}