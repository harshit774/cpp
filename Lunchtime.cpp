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
    //ll sum=0;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        //sum+=a[i];
    }
    for( ll i=0;i<n;i++)
    {
        ll cnt=0;
        for( ll j=i-1;j>=0;j--)
        {
            if(a[j]>a[i]) break;
            else if(a[j]==a[i]) cnt++;
        }
        for( ll j=i+1;j<n;j++)
        {
            if(a[j]>a[i]) break;
            else if(a[j]==a[i]) cnt++;
        }
        cout << cnt <<" ";
    }
    
}
return 0;
}