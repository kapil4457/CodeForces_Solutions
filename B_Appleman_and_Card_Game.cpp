#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;

bool cmp(pair<char, int> &a,
         pair<char, int> &b)
{
    return a.second > b.second;
}
void sorting(map<char, int> &M)
{

    vector<pair<char, int>> A;

    for (auto &it : M)
    {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);
}
int main()
{
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;

    map<char, int> ref;

    for (int i = 0; i < n; i++)
    {
        ref[str[i]]++;
    }
    sorting(ref);
    string ans = "";
    for (auto it : ref)
    {

        while (k != 0 && it.second != 0)
        {
            k--;
            it.second--;
            ans.push_back(it.first);
        }
    }

    ll answer = 0;

    map<int, int> ref2;
    for (int i = 0; i < ans.size(); i++)
    {
        ref2[ans[i]]++;
    }

    for (auto it : ref2)
    {
        answer += (it.second * it.second);
    }

    cout << answer << endl;

    return 0;
}