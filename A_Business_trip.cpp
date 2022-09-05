#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int size = 12;
    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    int ans = 0;
    int cnt = 0;
    bool check = false;
    for (int i = 0; i < v.size(); i++)
    {
        if (ans >= n)
        {
            check = true;
            break;
        }
        ans += v[i];
        cnt++;
        if (ans >= n)
        {
            check = true;
            break;
        }
    }
    if (check == true)
    {

        cout << cnt;
    }
    else
    {
        cout << -1;
    }

    return 0;
}