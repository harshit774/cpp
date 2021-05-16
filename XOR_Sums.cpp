#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll a[n];
        ll sum=0;
        ll q,m;cin>>q>>m;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            //sum+=a[i];
            //sum+=n&n-1;
        }
        for(ll i=0;i<n;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<'\n';
        
    }
}