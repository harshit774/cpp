#include<iostream>
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
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum&1) cout<<2<<'\n';
        else cout<<1<<'\n';
    }
    return 0;
}