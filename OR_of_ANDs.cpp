#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,q;cin>>n>>q;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll b[32];//={0};
    for(ll i=0;i<32;++i)b[i]=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<32;++j)
        {
            if(a[i]&(1<<j))
            {
                b[j]++;
            }
        }
    } 
    ll res=0; 
    for(ll i=0;i<32;++i)
    {
        if(b[i]>0)res+= (1<<i);
    }
    cout<<res<<'\n';
    while(q--)
    {
        ll X,V;cin>>X>>V;
        ll p = a[X-1];
        for(ll i=0;i<32;++i)
        {
            if(p&(1<<i))b[i]--;
        }
        a[X-1] = V;
        for(ll i=0;i<32;++i)
        {
            if(V&(1<<i))b[i]++;
        }
        ll res=0; 
        for(ll i=0;i<32;++i)
        {
            if(b[i]>0)res+= (1<<i);
        }
        cout<<res<<'\n';
    }
}
return 0;
} //Code Contributed by Harshit Varshney