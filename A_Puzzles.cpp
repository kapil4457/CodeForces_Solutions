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

    int i = 0;
    int j = n - 1;
    int mini = INT_MAX;
    sort(arr.begin(), arr.end());

    while (j != m)
    {
        if (arr[j] - arr[i] < mini)
        {
            mini = arr[j] - arr[i];
        }
        j++;
        i++;
    }

    cout << mini;
    return 0;
}