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
        ll max,min;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(ll i=0;i<n;i++)
        {
            max=a[0];
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        for(ll i=0;i<n;i++)
        {
            min=a[0];
            if(a[i]<min)
            {
                min=a[i];
            }
        }
        ll ans=max-min;
        ans*=2;
        cout<< ans <<'\n';
    }
    return 0;
}