#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll minDist = INT_MAX;
    ll pos = -1;
    bool same = false;
    for (ll i = 0; i < n; i++)
    {
        if (minDist == arr[i])
        {
            same = true;
        }
        else if (minDist > arr[i])
        {
            minDist = arr[i];
            pos = i + 1;
            same = false;
        }
    }

    if (same == true)
    {
        cout << "Still Rozdil";
    }
    else
    {

        cout << pos;
    }
    return 0;
}