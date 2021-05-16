#include<iostream>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll a[n];
        ll even=0;
        ll odd=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if (a[i] & 1 == 1)
                odd++;
            else
                even++;
        }
        cout<<min(even,odd)<<'\n';

    }
}