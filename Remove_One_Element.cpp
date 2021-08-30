#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(a,b,c) for(int a=b;a<c;a++)
#define ff(a,b,c) for(int a=b;a>=c;a--)
#define pb push_back
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;

ll helper(ll n,ll a[],ll b[]){
    sort(a,a+n);
    sort(b,b+n-1);
    map<ll,ll> mp;
    for(ll i=0;i<n-1;i++){
        mp[b[i] - a[i]]++ , mp[b[i] - a[i+1]]++;
    }
    ll ans = LONG_MAX;
    for(auto i:mp){
        if(i.second >= (n-1) and i.first>0){
            ans = min(ans,i.first);
        }
    }
    return ans;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll a[n],b[n-1];
    fo(i,0,n) cin>>a[i];
    for(ll i=0;i<n-1;i++) cin>>b[i];
    ll ans = helper(n,a,b);
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney