#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll n;
    cin >> n;
    if (n >= 0)
    {
        cout << n;
    }
    else
    {
        string str = to_string(n);
        if (str[str.length() - 1] > str[str.length() - 2])
        {
            str.erase(str.length() - 1);
        }
        else
        {
            str.erase(str.length() - 2, 1);
        }
        ll ans = stoll(str);
        cout << ans;
    }
    return 0;
}