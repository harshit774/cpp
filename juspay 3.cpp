#include<bits/stdc++.h>
#include<iostream>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    unordered_map<ll,vector<ll>> mp;
    unordered_map<ll,ll> vis;
    ll n,m,a,b;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        mp[a]={};
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        mp[a].pb(b);
    }
    cin>>a>>b;
    vector<int> res;
    queue<int>q;
    vis[a]=1;
    q.push(a);
    while(!q.empty())
    {
        int y=q.front();
        q.pop();
        for(int i:mp[y])
        {
            if(vis[i]==0)
            {
                if(i==b)
                res.pb(y);
                else 
                {
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
    }
    if(res.size()==0)
    {
        cout<< "-1";
        exit(0);
    }
    sort(res.begin(),res.end());
    for(int i:res)
    cout<< i << " ";
    return 0;
}

