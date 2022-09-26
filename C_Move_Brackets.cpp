#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        stack<char> st;
        for (auto i : s)
        {
            if (i == '(' or i == '{' or i == '[')
                st.push(i);
            else
            {
                if (st.empty() or (st.top() == '(' and i != ')') or (st.top() == '{' and i != '}') or (st.top() == '[' and i != ']'))
                {
                    ans++;
                }
                else
                {

                    st.pop();
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}