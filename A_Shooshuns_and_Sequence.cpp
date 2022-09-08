#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ref = arr;
    int ans = 0;
    map<int, int> temp;

    for (int i = 0; i < n; i++)
    {
        temp[arr[i]]++;
    }
    while (true)
    {

        if (temp.size() == 1)
        {
            break;
        }
        int kth = arr[k - 1];
        temp[kth]++;
        arr.push_back(kth);
        temp[arr[0]]--;
        if (temp[arr[0]] == 0)
        {
            auto it = temp.find(arr[0]);
            temp.erase(it);
        }
        arr.erase(arr.begin(), arr.begin() + 1);
        ans++;
        if (arr == ref)
        {
            ans = -1;
            break;
        }
    }

    cout << ans;
    return 0;
}

// Second Way
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int a[100001];

int main()
{
    int n, k, num = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = k; i <= n; i++)
    {
        if (a[i] == a[i + 1])
            num++;
    }
    if (num + 1 != n - k + 1)
    {
        cout << -1;
        return 0;
    }
    else
    {
        for (int i = k; i >= 1; i--)
        {
            if (a[i] != a[i - 1])
            {
                cout << i - 1;
                break;
            }
        }
    }
}