#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-1;i>=0;i--)
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
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
    for(ll i=0;i<n;i++){
        cin>>a[i] , mp[a[i]-i]++;
    }
    ll ans = 0;
    for(auto z:mp)
    {
        ans+=(z.second)*(z.second-1)/2;
    }
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney