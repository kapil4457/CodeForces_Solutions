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

//  2 3 5 7

int main()
{

    int n = 10, m = 2;
    cin >> n >> m;

    if (n < m)
    {
        cout << -1;
        return 0;
    }
    int steps = n / 2;

    if (n % 2)
    {
        steps += 1;
    }

    // cnt means the number of 2's in the sequence
    int cnt = steps;

    while (cnt != 0 && steps % m != 0)
    {

        if (steps == n && steps % m != 0)
        {
            cout << -1 << endl;
            return 0;
        }
        else if ((steps == n && steps % m == 0) || steps % m == 0)
        {
            cout << steps << endl;
            return 0;
        }
        if (cnt)
        {
            steps++;
            cnt--;
        }
    }

    cout << steps;
    return 0;
}