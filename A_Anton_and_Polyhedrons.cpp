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

    map<string, int> ref;
    string temp;
    for (int i = 0; i < n; i++)

    {
        cin >> temp;
        ref[temp]++;
    }

    ll sides = 0;

    for (auto it : ref)
    {
        if (it.first == "Icosahedron")
        {
            sides += (it.second * 20);
        }
        if (it.first == "Cube")
        {
            sides += (it.second * 6);
        }

        if (it.first == "Tetrahedron")
        {
            sides += (it.second * 4);
        }

        if (it.first == "Dodecahedron")
        {
            sides += (it.second * 12);
        }
        if (it.first == "Octahedron")
        {
            sides += (it.second * 8);
        }
    }

    cout << sides;
    return 0;
}