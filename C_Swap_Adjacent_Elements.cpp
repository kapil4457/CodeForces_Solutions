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

// My Approach :

// int main()
// {

//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     string str;
//     cin >> str;

//     int last0 = -1;

//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] > i + 1 && str[i] == '0')
//         {
//             cout << "NO" << endl;
//             return 0;
//         }
//         if (str[i] == 0)
//         {

//             if (v[i] != i)
//             {

//                 if (last0 == -1)
//                 {
//                     continue;
//                 }

//                 else
//                 {
//                     if (last0 < v[i])
//                     {
//                         continue;
//                     }
//                     else
//                     {
//                         cout << "NO" << endl;
//                         return 0;
//                     }
//                 }
//             }

//             last0 = i;
//         }
//         else
//         {
//             if (last0 >= v[i])
//             {
//                 cout << "NO" << endl;
//                 return 0;
//             }
//         }
//     }

//     cout << "YES" << endl;
//     return 0;
// }

// Waqar-107 's approach
int main()
{
    // freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, cnt;
    int l, r, x;
    string s;

    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    cin >> s;
    x = -1;

    for (i = 0; i < n - 1; i++)
    {
        if (s[i] == '0')
        {
            if (x == -1)
                l = 0;
            else
                l = x + 1;

            r = i;

            for (j = l; j <= r; j++)
            {
                if (a[j] >= l + 1 && a[j] <= r + 1)
                    continue;

                else
                {
                    printf("NO");
                    return 0;
                }
            }

            x = i;
        }
    }

    printf("YES");

    return 0;
}