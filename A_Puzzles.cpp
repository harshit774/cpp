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
    ll n,m;cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll ans = a[n-1]-a[0];
    for(ll i=1;i<=m-n;i++)
    {
        ans = min(ans,a[i+n-1]-a[i]);
    }
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney