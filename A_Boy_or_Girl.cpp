#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    map<char, int> ref;
    for (int i = 0; i < str.length(); i++)
    {
        ref[str[i]]++;
    }
    int size = ref.size();

    if (size % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}