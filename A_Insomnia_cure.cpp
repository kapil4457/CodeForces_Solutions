#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int count = 0;
    for (int i = 1; i <= d; i++)
    {
        if (i % l == 0 || i % m == 0 || i % n == 0 || i % k == 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}