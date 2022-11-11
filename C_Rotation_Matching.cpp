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
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    map<int, int> ref1, ref2;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i + 1 == n)
        {
            ref1[a[i]] = 0;
        }
        else
        {

            ref1[a[i]] = i + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (i + 1 == n)
        {
            ref2[b[i]] = 0;
        }
        else
        {

            ref2[b[i]] = i + 1;
        }
    }

    // for (auto it : ref1)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    // cout << endl;
    // for (auto it : ref2)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    // cout << endl;

    map<int, int> ref;

    for (int i = 0; i < n; i++)
    {
        int t1 = ref1[a[i]] % n;
        int t2 = ref2[a[i]] % n;
        int temp = (abs(t1 - t2) % n);

        ref[temp]++;
    }
    int maxi = INT_MIN;
    for (auto it : ref)
    {
        if (it.second > maxi)
        {
            maxi = it.second;
        }
    }
    for (auto it : ref)
    {
    }
    cout << maxi << endl;

    return 0;
}