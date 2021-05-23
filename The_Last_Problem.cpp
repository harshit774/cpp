#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define fff(i,a,b) for(int i = a; i < b ; i++)
#define pb push_back
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;

ll helper(ll a,ll b,ll c,ll d)
{
    ll r = 1;
    for(ll i=1;i<a;i++)
    {
        r = r + i+1;
    }
    for(ll i=1;i<b;i++)
    {
        r = r + a + i-1;
    }
    ll res=0;
    for(ll i=a;i<c;i++)
    {
        res+=r;
        r = r + i + b;
    }
    for(ll i=b;i<=d;i++)
    {
        res+=r;
        r = r + c + i-1;
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
    ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    ll ans = helper(x1,y1,x2,y2);
    cout<< ans <<'\n';

}
return 0;
} //Code Contributed by Harshit Varshney