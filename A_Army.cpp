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
    ll arr[110],i;
    for(ll i=1;i<n;i++)
    {
        cin>>arr[i];
    }
    ll a,b;cin>>a>>b;
    ll sum=0;
    for(ll i=a;i<=b-1;i++)
    {
        sum+=arr[i];
    }
    cout<< sum <<'\n';
}
return 0;
}