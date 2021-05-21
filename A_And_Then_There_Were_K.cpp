#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-1;i>=0;i--)
#define fff(i,a,b) for(int i = a; i <= b ; i++)
#define pb push_back
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll a = 1;
    //ll b = a;
    while(a<=n)
    {
        a*=2;
    }
    cout<< (a/2)-1 <<'\n';
    // if(n==1) {
    //     cout<< 0 <<'\n';
    //     continue;
    // }
    // int x = 1;
    // while(x<n) x*=2;
    // x/=2;
    // int p = n;
    // while(n%2==0) n/=2;
    // if(n==1) {
    //     cout<< p-1 <<'\n' ;
    //     continue;
    // }
    // cout<< x-(n>1?1:0) <<'\n';
    
    
}
return 0;
} //Code Contributed by Harshit Varshney