#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;


//  2 3 5 7 

int main()
{
int n,m;
cin>>n>>m;

if(m > n){
    cout<<-1<<endl;
    return 0;
}

if(n%m==0){
    cout<<n/2+1<<endl;
}else{
    int ans = (n/2)+(n%m);
    cout<<ans<<endl;
}


 return 0;
}