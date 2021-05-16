#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    ll n,k;cin>>n>>k;
    ll a[n],sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i]>=a[k-1] && a[i]>0) sum++;
    }
    cout<< sum <<'\n';
}
return 0;
}