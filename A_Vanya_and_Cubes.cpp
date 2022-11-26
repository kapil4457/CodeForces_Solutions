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

    ll arr[10001];
    // calculate the prefx sum
    arr[1] = 1;
    for (ll i = 2; i <= 10000; i++)
    {
        arr[i] = i + arr[i - 1];
    }

    ll n;
    cin >> n;

    ll i = 1;

    while (n > 0)
    {
        n -= arr[i];
        if (n < 0)
        {
            break;
        }
        i++;
    }
    cout << i - 1 << endl;
    return 0;
}
