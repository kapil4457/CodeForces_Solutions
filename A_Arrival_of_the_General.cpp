#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> ref(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ref[i];
    }
    // ref[0] = 10;
    // ref[1] = 10;
    // ref[2] = 58;
    // ref[3] = 31;
    // ref[4] = 63;
    // ref[5] = 40;
    // ref[6] = 76;

    int ans = 0;
    int smallestNum = INT_MAX;
    int smallPos = -1;

    for (int i = 0; i < n; i++)
    {
        if (ref[i] <= smallestNum)
        {
            smallestNum = ref[i];
            smallPos = i;
        }
    }

    ans += (n - (smallPos + 1));

    for (int i = smallPos; i < n - 1; i++)
    {
        swap(ref[i], ref[i + 1]);
    }

    int biggestNum = INT_MIN;
    int bigPos = -1;

    for (int i = 0; i < n; i++)
    {
        if (ref[i] > biggestNum)
        {
            biggestNum = ref[i];
            bigPos = i;
        }
    }
    ans += bigPos;

    cout << ans;

    return 0;
}