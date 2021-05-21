#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,b,a) for(int i=b-1;i>=a;i--)
#define fff(i,a,b) for(int i = a; i < b ; i++)
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
ll t=1;// cin>>t;
while(t--)
{
    ll w,h;cin>>w>>h;
    ll u1,d1;cin>>u1>>d1;
    ll u2,d2;cin>>u2>>d2;
    ll ans = 0;
    for(ll i=h;i>=1;i--)
    {
        w+=i;
        if(i==d1)
        {
            w=max(ans,w-u1);
        }
        if(i==d2)
        {
            w=max(ans,w-u2);
        }
    }
    cout<< w <<'\n';
    
}
return 0;
} //Code Contributed by Harshit Varshney