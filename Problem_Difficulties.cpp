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
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll a[4];
    unordered_map<ll,ll> mp;
    for(ll i=0;i<4;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    vector<ll> v;
    for(auto it : mp){
        v.pb(it.second);
    }
    sort(v.begin(),v.end(),greater<ll>());
    if(v[0]>3) cout<< 0 <<'\n';
    else if(v[0]>2) cout<< 1 <<'\n';
    else cout<< 2 <<'\n';    
}
return 0;
} //Code Contributed by Harshit Varshney