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
    ll count = 0;
    ll a[n];
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(ll i=1;i<=n;i++)
    {
        if(a[a[a[i]]]==i) cout<< "YES" <<'\n' , exit(0);
    }
    cout<< "NO" <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney