#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-2;i>=0;i--)
#define fff(i,a,b) for(int i = a; i < b ; i++)
#define pb push_back
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;

ll helper(vector<ll> &arr,ll N){
    ll n = arr.size();
    vector<ll> prefix(n,0);
    fo(i,n){
        prefix[i] = N+1 - arr[i];
    }
    ff(i,n)
    {
        prefix[i] = prefix[i] + prefix[i+1];
    }

    ll res = 0;
    fo(i,n)
    {
        if(i+1<n) 
        {
            res+=prefix[i+1]*(arr[i]);
        }
    }
    return res;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n; cin>>n;
    vector<ll> a(n,0);
    fo(i,n) cin>>a[i];
    map<ll,vector<ll>> mp;
    fo(i,n) mp[a[i]].pb(i+1);
    ll ans = 0;
    for(auto it : mp){
        ans+=helper(it.second,n);
    }
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney