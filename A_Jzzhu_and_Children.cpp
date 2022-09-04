#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, m = 2;
    // cin >> n >> m;
    vector<pair<int, int>> ref(n);
    // for (int i = 0; i < n; i++)
    // {
    //     ref[i].first = i + 1;
    //     cin >> ref[i].second;
    // }
    pair<int, int> t1, t2, t3, t4, t5;
    t1.first = 1;
    t1.second = 1;
    t2.first = 2;
    t2.second = 3;
    t3.first = 3;
    t3.second = 1;
    t4.first = 4;
    t4.second = 4;
    t5.first = 5;
    t5.second = 2;
    ref.push_back(t1);
    ref.push_back(t2);
    ref.push_back(t3);
    ref.push_back(t4);
    ref.push_back(t5);

    int i = 0;

    while (true)
    {
        // If only one element is left in the vector
        if (ref.size() == 1)
        {
            cout << ref[0].first << endl;
            break;
        }
        // If an element is fulfilled
        else if (ref[i].second - m <= 0)
        {
            ref.erase(ref.begin() + i, ref.begin() + i);
        }
        // If the element is not fulfilled
        else if (ref[i].second - m > 0)
        {
            pair<int, int> temp;
            temp.first = ref[i].first;
            temp.second = ref[i].second - m;
            ref.erase(ref.begin() + i, ref.begin() + i);
        }
    }

    return 0;
}