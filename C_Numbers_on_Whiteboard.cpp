#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;
int main()
{
int t;
cin>>t;

while(t--){
double n;
cin>>n;


cout<<2<<endl;
int a = n , b = n-1;

for(int i =1; i  < n ; i ++){
    cout<<a<<" "<<b<<endl;


    a = (a+b+1)/2 , b--;
}




}
 return 0;
}