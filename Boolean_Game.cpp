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
    ll n,m,k;cin>>n>>m>>k;
    vector<ll> v(n+1);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i+1];
    }
    vector<vector<pair<ll,ll>>> a(n+1),dp(n+1);
    for(ll i=0;i<m;i++)
    {
        ll u,v,d;cin>>u>>v>>d;
        a[u].push_back(make_pair(i,d));
        a[v].push_back(make_pair(i,d));
    }
    dp[0].push_back(make_pair(0,0));
    for(ll i=1;i<=n;i++)
    {
        vector<pair<ll,ll>> t;
        t.insert(t.end(),dp[i-1].begin(),dp[i-1].end());
        ll c=0;
        ll msk=0;
        set<ll> op;
        for(ll j=i;j>=1;j--)
        {
            c += v[j];
            msk^=1LL<<j;
            for(auto xyz:a[j])
            {
                if(op.count(xyz.first))
                {
                    c+=xyz.second;
                }
                else op.insert(xyz.first);
            }
            if(j>1)
            {
                for(auto xyzj:dp[j-2])
                {
                    t.push_back(make_pair(xyzj.first+c,msk^xyzj.second));
                }
            }
            else t.push_back(make_pair(c,msk));
        }
        sort(t.begin(),t.end());
        reverse(t.begin(),t.end());
        set<ll> ss;
        ll f=0;
        for(ll j=0;j<t.size() and f<k;j++)
        {
            if(ss.count(t[j].second))
            continue;
            dp[i].push_back(t[j]);
            f++;
            ss.insert(t[j].second);
        }
    }
    for(ll i=0;i<k;i++)
    {
        cout<< dp[n][i].first << " ";
    }
    cout<<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney