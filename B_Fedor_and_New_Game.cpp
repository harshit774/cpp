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
    ll n,m,k;cin >> n >> m >> k;
    ll a[m+1];
    ll count[m+1];
    for(ll i=0; i<m+1; i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<m+1;i++){
        ll z = (a[i]^a[m]);
        ll x = 0;
        while(z>0)
        {
            z = z & z-1;
            x++;
        }
        count[i] = x;
    }
    ll ans = 0;
    for(ll i=0; i<m; i++)
    {
        if(count[i] <= k)
        {
            ans++;
        }
    }
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney