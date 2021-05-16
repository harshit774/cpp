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
    ll n,m;cin>>n>>m;
    ll a[n][m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
        }
        sort(a[i],a[i]+m);
    }
    ll dp[n][m];
    ll vis[n][m];
    memset(vis,0,sizeof(vis));
    memset(dp,0,sizeof(dp));
    ll b[n] = {0};
    //ll temp = 0;
    for(ll i=0;i<m;i++)
    {
        ll mi=INT_MAX, idx;
        for(ll j=0;j<n;j++)
        {
            if(b[j]<m){
                if(a[j][b[j]]<mi)
                {
                    mi = a[j][b[j]];
                    idx = j;
                }
            }
        }
        dp[idx][i] = a[idx][b[idx]];
        vis[idx][i] = 1;
        b[idx]+=1;
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(!vis[i][j])
            {
                dp[i][j] = a[i][b[i]];
                b[i] += 1;
            }
            cout<< dp[i][j] << " ";
        }
        cout<<'\n';
    }
}
return 0;
}//Code Contributed by Harshit Varshney