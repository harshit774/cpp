#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;

ll Accepted(ll ind,ll cur,ll a[],ll m,ll n)
{
    if(ind==m)
    {
        return 0;
    }
    ll des=a[ind];
    if(des>=cur)
    {
        return (des-cur+Accepted(ind+1,des,a,m,n));
    }
    else
    {
        return (n-cur+des+Accepted(ind+1,des,a,m,n));
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    ll n,m;cin>>n>>m;
    ll a[m];
    for(ll i=0;i<m;i++)
    {
        cin>>a[i];
    }
    ll ans = Accepted(0,1,a,m,n);
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney