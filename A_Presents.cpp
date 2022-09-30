#include <iostream>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int n, b, mas[105];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> b;
        mas[b] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << mas[i] << " ";
    }
}