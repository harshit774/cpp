#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(a,b,c) for(int a=b;a<c;a++)
#define ff(a,b,c) for(int a=b;a>=c;a--)
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;

vector<int> adj[1000+5];
bool vis[1000+5];
bool dfs(int a, int b)
{
    if(a==b)return true;
    vis[a]=1;
    for(auto x: adj[a])
    {
        if(!vis[x])
            if(dfs(x,b))return true;
    }
    return false;
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x; v.pb(x);
    }
    int b; cin>>b;
    for(int i=0;i<b;i++)
    {
        int x,y; cin>>x>>y;
        adj[x].pb(y);
    }
    int n1,n2; cin>>n1>>n2;
    if(dfs(n1,n2))
    {
        cout<< "1";
    }
    else cout<< "0";
}
return 0;
} //Code Contributed by Harshit Varshney



