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

void dfs(ll u, vector<vector<ll>> &graph, vector<ll> &vis){
    vis[u]=1;
    for(auto it:graph[u]){
        if(!vis[it]){
            dfs(it,graph,vis);
        }
    }
}
vector<ll> harshit(4e5+10,1);
//const ll mod=1e9+7;

void helper(){
    ll n;cin>>n;
    vector<vector<ll>> G(n);
    vector<ll> a(n);
    vector<ll> b(n);
    fo(i,0,n){
        cin>>a[i];
        a[i]--;
    }
    fo(i,0,n){
        cin>>b[i];
        b[i]--;
        G[a[i]].pb(b[i]);
        G[b[i]].pb(a[i]);
    }
    vector<ll> vis(n,0);
    ll res = 0;
    fo(i,0,n){
        if(!vis[i]){
            res++;
            dfs(i,G,vis);
        }
    }
    cout<< harshit[res] <<'\n';
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
for(ll i=1;i<4e5+10;i++){
    harshit[i]=harshit[i-1];
    harshit[i]*=2;
    harshit[i]%=mod;
}
while(t--)
{
    helper();
}
return 0;
} //Code Contributed by Harshit Varshney