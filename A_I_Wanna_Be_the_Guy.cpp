#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{
    int n;
    cin >> n;

    set<int> ref;

    int a;
    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> a;
        ref.insert(a);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> a;
        ref.insert(a);
    }

    int i = 1;
    if (ref.size() < n)
    {
        cout << "Oh, my keyboard!" << endl;
        return 0;
    }
    for (auto it : ref)
    {
        if (i != it)
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
        i++;
    }

    cout << "I become the guy." << endl;

    return 0;
}