#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(m);

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    vector<int> highest = arr;
    vector<int> lowest = arr;

    sort(highest.begin(), highest.end(), greater<int>());
    sort(lowest.begin(), lowest.end());

    int maxi = 0;
    int mini = 0;
    // finding maximum possible amount
    for (int i = 0; i < n; i++)
    {
        maxi += highest[0];
        highest[0]--;
        sort(highest.begin(), highest.end(), greater<int>());
    }

    // finding the minimum possible amount
    for (int i = 0; i < n; i++)
    {
        if (lowest[0] == 0)
        {
            lowest.erase(lowest.begin(), lowest.begin() + 1);
        }
        mini += lowest[0];
        lowest[0]--;
        sort(lowest.begin(), lowest.end());
    }

    cout << maxi << " " << mini << endl;
    return 0;
}