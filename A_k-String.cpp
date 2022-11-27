#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    map<char, int> ref;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        ref[s[i]]++;
    }

    bool check = true;

    for (auto it : ref)
    {
        if (it.second % t != 0)
        {
            check = false;
        }
    }
    // check gets false if there is no ratio occurance in each character
    if (check == false)
    {
        cout << -1;
    }
    else
    {
        string ans = "";
        
        for(auto it : ref){
            int c = it.second/t;
            for(int i = 0 ; i < c ; i ++){
                ans.push_back(it.first);
            }
        }
       
       for(int i = 0 ; i < t ; i ++){
        cout<<ans;
       }
       cout<<endl;

    }

    return 0;
}