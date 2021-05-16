#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;cin>>n;
    ll a[7];
    for(ll i=0;i<7;i++)
    {
        cin>>a[i];
    }
    while(n>0)
    {
        for(ll i=0;i<7;i++)
        {
            n=n-a[i];
            if(n<=0)
            {
                cout<< i+1 <<'\n';
                break;
            }
        }
    }
return 0;
}