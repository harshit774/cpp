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

ll helper(ll n,ll k,vector<ll> v){
    if(n>1000){
        ll sol = -1e7;
        reverse(v.begin(),v.end());
        fo(i,0,1000){
            fo(j,i+1,1000){
                ll val = (n-i)*(n-j) - (v[i] | v[j])*k;
                sol = max(sol , val);
            }
        }
        return sol;
    }
    else{
        ll sol = -1e7;
        fo(i,0,n){
            fo(j,i+1,n){
                ll val = (i+1)*(j+1) - (v[i]|v[j])*k;
                sol = max(sol , val);
            }
        }
        return sol;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n , k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i = 0 ; i<n ; i++)cin>>v[i];

    ll ans = helper(n,k,v);
    cout<< ans <<'\n';
 
}
return 0;
} //Code Contributed by Harshit Varshney