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
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll a[n],b[n];
    ll s=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        //cin>>b[i];
        //s+=a[i]+b[i];
    }
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        //cin>>a[i];
        cin>>b[i];
    }
    //sort(b,b+n);
    reverse(b,b+n);
    for(ll i=0;i<n;i++)
    {
        s=max(s,a[i]+b[i]);
    }
    cout<< s <<'\n';

    

}
return 0;
} //Code Contributed by Harshit Varshney