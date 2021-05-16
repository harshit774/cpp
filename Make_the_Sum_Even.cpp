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
    ll s=0;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(s%2==0) cout<< 0 <<'\n';
    else 
    {
        ll res=0;
        for(ll i=0;i<n;i++)
        {
            if((a[i]%2==0) and ((a[i]+1)/2-1<=0))
            {
                res=1;break;
            }
        }
        if(res==0) cout<< -1 <<'\n';
        else cout<< 1 <<'\n';

    }
}
return 0;
}