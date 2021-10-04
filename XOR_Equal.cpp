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
    ll n,x;cin>>n>>x;
    unordered_map<ll,ll> mp;
    fo(i,0,n){
        ll p;cin>>p;
        mp[p]++;
    }
    ll ans = 0;
    ll count = 0;
    for(auto i:mp){
        ll q = i.first ^ x;
        if(mp.find(q)!=mp.end() and x!=0){
            ll z = i.second + mp[q];
            if(ans==z){
                ans = z;
                count = min(count,i.second);
            } 
            else if(ans<z){
                ans = z;
                count = i.second;
            }
        }
        else{
            if(ans <= i.second){
                ans = i.second;
                count = 0;
            }
        }
    }
    cout<< ans << " " << count <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney