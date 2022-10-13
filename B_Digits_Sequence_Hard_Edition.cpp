#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{
    string str = "";
    for (ll i = 0; i < 1000000; i++)
    {
        str += to_string(i);
    }

    ll n;
    cin >> n;

    cout << str[n] << endl;

    return 0;
}