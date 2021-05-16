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

ll dfs(vector<ll> graph[],ll node,ll par)
{
    ll p=1;
    vector<ll> v;
    for(auto it:graph[node]){
        if(it!=par){
            v.push_back(dfs(graph,it,node));
        }
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(ll i=0;i<v.size();i++){

        p+=(v[i])*(i+1);
    }
    return p;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,x;cin>>n>>x;
    vector<ll> graph[n+1];
    for(ll i=0;i<n-1;i++){
        ll u,v;cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cout<< ((dfs(graph,1,0))%mod*x)%mod <<'\n';

}
return 0;
} //Code Contributed by Harshit Varshney