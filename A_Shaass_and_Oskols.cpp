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
ll t=1;//cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll a[n+2];
    ll m;
    //ll x,y;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    //cout<< m ;
    ll x,y;
    for(ll i=1;i<=m;i++)
    {
        cin>>x>>y;
        a[x+1]+=a[x]-y;
        a[x-1]+=(y-1);
        a[x]=0;
    }
    //cout<< x << " " <<y;
    for(ll i=1;i<=n;i++)
    {
        cout<< a[i] <<'\n';
    }
}
return 0;
} //Code Contributed by Harshit Varshney