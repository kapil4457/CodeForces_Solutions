#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "YES" << endl;
        return 0;
    }
    vector<int> v(n);
    map<int, int> ref;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ref[v[i]]++;
    }

    for (auto it : ref)
    {
        if (it.second > ceil(n / 2) + 1)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}