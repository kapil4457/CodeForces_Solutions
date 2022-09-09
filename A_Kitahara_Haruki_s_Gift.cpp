#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int numOfAppleWithWeight100 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 100)
        {
            numOfAppleWithWeight100++;
        }
    }

    if (numOfAppleWithWeight100 % 2 != 0 || v.size() == 1 || (numOfAppleWithWeight100 == 0 && v.size() % 2 != 0))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}