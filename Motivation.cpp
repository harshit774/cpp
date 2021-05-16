#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll x;cin>>x;
    pair<ll,ll> a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i].second>>a[i].first; 
    }
    sort(a,a+n);
    for(ll i=n-1;i>=0;i--)
    {
        if(a[i].second<=x){
            cout<< a[i].first <<'\n';
            break;
        }
    }
}
return 0;
}