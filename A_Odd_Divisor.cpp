#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long int
int main()
{
    fastread();
    // freopen("input.txt","r", stdin);
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n & 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool ok = false;
            ll div = n;
            while (div > 2)
            {
                div /= 2;
                if (div & 1)
                {
                    if (n % div == 0)
                    {
                        ok = true;
                        break;
                    }
                }
            }
            if (ok)
            {
                // cout<<div<<endl;
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
