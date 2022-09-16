#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 2, m = 2;
    cin >> n >> m;

    int ans = 0;
    while (n != 0)
    {

        ans++;
        if (ans % m == 0)
        {
            n++;
        }
        n--;
    }

    cout << ans;

    return 0;
}