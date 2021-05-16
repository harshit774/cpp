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
    ll n,k;cin>>n>>k;
    ll a[n],i;
    ll mx;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(ll i=n-1;i>=0;i--)
    {
        if(k%a[i]==0)
        {
            mx=a[i];
            break;
        }
    }
    ll ans = k/mx;
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney