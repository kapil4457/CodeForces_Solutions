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
    map<int, int> ref;
    int a;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 25)
        {
            ref[a]++;
            continue;
        }
        else
        {
            ref[a]++;
            a -= 25;

            if (a == 25)
            {
                if (ref[a] != 0)
                {

                    ref[a]--;
                }
                else
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
            else if (a >= 100)
            {

                while (ref[100] != 0 && a >= 100)
                {
                    ref[100]--;
                    a -= 100;
                }
                while (ref[50] != 0 && a >= 50)
                {
                    ref[50]--;
                    a -= 50;
                }
                while (ref[25] != 0 && a != 0)
                {
                    ref[25]--;
                    a -= 25;
                }

                if (a != 0)
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
            else if (a >= 50)
            {
                while (ref[50] != 0 && a >= 50)
                {
                    ref[50]--;
                    a -= 50;
                }
                while (ref[25] != 0 && a != 0)
                {
                    ref[25]--;
                    a -= 25;
                }

                if (a != 0)
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "YES" << endl;

    return 0;
}