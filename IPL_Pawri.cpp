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
    ll a[n];
    map<ll,ll> mp;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto i:mp)
    {
        if(i.second==3)
        {
            cout<< 3*i.first <<'\n';
        }
    }
}
return 0;
} //Code Contributed by Harshit Varshney