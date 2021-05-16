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

void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &storeDfs) 
{
    storeDfs.push_back(node); 
    vis[node] = 1; 
    for(auto it : adj[node]) 
    {
        if(!vis[it]) 
        {
            dfs(it, vis, adj, storeDfs); 
        }
    }
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//      cin>>t;
while(t--)
{
    ll n;cin>>n;
    
}
return 0;
} //Code Contributed by Harshit Varshney