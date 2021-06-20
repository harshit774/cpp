#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fi first
#define se second
#define fo(a,b,c) for(int a=b;a<c;a++)
#define ff(a,b,c) for(int a=b;a>=c;a--)
#define pb push_back
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    ll n,m;cin>>n>>m;
    string s;cin>>s;
    map<ll,ll> mpp[n+1];
    map<ll,ll> pre[n+1];
    fo(i,1,n+1){
        for(auto it : mpp[i-1]){
            mpp[i][it.fi]=it.se;
        }
        mpp[i][s[i-1]-'a']++;
    }
    ff(i,n-1,0){
        for(auto it:pre[i+1]){
            pre[i][it.fi] = it.se;
        }
        pre[i][s[i]-'a'] = i;
    }
    // fo(i,0,m){
    //     ll l,r;cin>>l>>r;
    // }
    // ll ans = helper(n,m,s,l,r);
    // cout<< ans <<'\n';
    fo(i,0,m){
        ll x,y;cin>>x>>y;
        map<ll,ll> mp;
        for(auto it : mpp[y]){
            mp[it.fi] = it.se - mpp[x-1][it.fi];
        }
        ll count = 0;
        for(auto it:mp){
            count+=(it.se)*(it.fi+1);
        }
        cout<< count <<'\n';
    }
    
}
return 0;
} //Code Contributed by Harshit Varshney