#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {

        int n = 7, a = 5, b = 3;
        cin >> n >> a >> b;

        string ans = "";

        string distict = "";
        char start = 97;
        for (int i = 0; i < b; i++)
        {
            distict.push_back(start);
            start++;
        }
        // cout << "distict : " << distict << endl;

        string forA = "";

        while (distict.length() != a)
        {
            distict.push_back(start - 1);
        }
        // cout << "distict 2 : " << distict << endl;

        int howManyTimes = ceil(n / a);
        for (int i = 0; i < howManyTimes; i++)
        {
            ans.append(distict);
        }
        // cout << "ans 1 : " << ans << endl;
        int leftOver = n % a;

        string temp = distict.substr(0, leftOver);
        // cout << "temp : " << temp << endl;

        ans.append(temp);
        cout << ans << endl;
    }
    return 0;
}