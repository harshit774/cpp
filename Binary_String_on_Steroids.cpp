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

ll helper(ll n,string s){
    ll c1 = 0 , c2 = 0;
    fo(i,0,n){
        if(s[i]=='1') c2++;
        else c1++;
    }
    vector<ll> fact;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0){
            if(n/i==1){
                fact.pb(i);
            }
            else{
                fact.pb(n/i);
                fact.pb(i);
            }
        }
    }
    ll res = 10000009;
    for(auto it : fact){
        vector<ll> f(it);
        fo(i,0,it){
            for(ll j=i;j<n;j+=it){
                if(s[j]=='1') f[i]++;
            }
        }
        ll rem = n/it;
        fo(i,0,it){
            ll pp = rem - f[i];
            pp+=(c2-f[i]);
            res = min(res,pp);
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
    ll n;cin>>n;
    string s;cin>>s;
    int ans = helper(n,s);
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney