#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    map<int, int> ref;
    ref[a]++;
    ref[b]++;
    ref[c]++;
    ref[d]++;

    int have = 0;
    for (auto it : ref)
    {
        have++;
    }

    int temp = 4 - have;
    if (temp <= 0)
    {
        cout << 0;
    }
    else
    {
        cout << temp;
    }

    return 0;
}