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

map<ll,ll> mp;
ll solve(ll n)
{
    if(n==0) return 0;
    if(mp[n]==0)
    {
        int sum = solve(n/2) + solve(n/3) + solve(n/4);
        if(sum>n){
            mp[n] = sum;
        }
        else
            mp[n] = n;
    }
    return mp[n];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;   //cin>>t;
while(t--)
{
    ll n;
    while(cin>>n){
        ll ans = solve(n);
        cout<< ans <<'\n';
        // if(n<=11) cout<< n <<'\n';
        // else{
        //     ll p = n/2;
        //     ll q = n/3;
        //     ll s = n/4;
        //     cout<< (p+q+s) <<'\n';
        // }
    }
}
return 0;
} //Code Contributed by Harshit Varshney