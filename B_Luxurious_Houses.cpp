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
    ll n;cin>>n;
    ll maxH,i;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //maxH=a[0];
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        maxH=a[0];
        if(a[i]>maxH)
        {
            maxH=a[i];
        }
    }
    cout<< maxH;
    // ll ans;
    // for(ll i=0;i<n;i++)
    // {
    //     ll p=0;
    //     ans = max(p,maxH+1-a[i]);
    // }
    // for(ll i=0;i<n;i++)
    //     cout<< a[i] <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney