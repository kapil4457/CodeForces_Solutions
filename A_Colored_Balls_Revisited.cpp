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
        vector<int> v(n);
        int maxiBalls = INT_MIN;
        int index = -1;
        int a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a > maxiBalls)
            {
                maxiBalls = a;
                index = i;
            }
        }

        cout << index + 1 << endl;
    }

    return 0;
}