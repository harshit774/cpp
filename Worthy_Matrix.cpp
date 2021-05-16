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
    double a[n+1][m+1];
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=m;j++)
        {
            if(i==0 or j==0)
            {
                a[i][j] = 0;
            }
            else
            {
                cin>>a[i][j];
            } 
        }
    }
    for(ll i=0;i<=n;i++)
    {
        double p = 0;
        for(ll j=0;j<=m;j++)
        {
            a[i][j]+=p;
            p = a[i][j];
        }
    }
    for(ll i=0;i<=m;i++)
    {
        double p = 0;
        for(ll j=0;j<=n;j++)
        {
            a[j][i]+=p;
            p = a[j][i];
        }
    }
    ll mm = min(m,n);
    ll ans = 0;
    for(ll x=1;x<=mm;x++)
    {
        for(ll i=x;i<=n;i++)
        {
            for(ll j=x;j<=m;j++)
            {
                if((a[i][j] + a[i-x][j-x] - a[i][j-x] - a[i-x][j])/(x*x)>=k)
                    ans++;
            }
        }
    }
    cout<< ans <<'\n';
}
return 0;
}// Code Contributed by Harshit Varshney