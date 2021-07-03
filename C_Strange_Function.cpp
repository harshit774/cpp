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

ll gcd(ll x,ll y){
    while(y!=0){
        ll z = y;
        y = x%y;
        x = z;
    }
    return x;
}

ll fffff(ll n,ll p,ll q){
    if(n==0) return 0;
    ll count = 0;
    ll xx = p/gcd(p,q);
    ll a = n/xx;

    count = (((n-a)%mod)*p)%mod;
    count = count + (fffff(a,p+1,q*xx))%mod;
    count%=mod;
    return count;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll ans = fffff(n,2,1);
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney