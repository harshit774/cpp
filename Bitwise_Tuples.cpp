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
// ll a[] = new int[1000002];
// a[1] = 2;
// fo(i,2,1000002){
//     a[i] = (2*a[i-1]%mod);
// }

ll exp(ll x,ll y){
    ll res = 1;
    while(y!=0){
        if(y&1) res = (res*x)%mod;
        x = (x*x)%mod;
        y/=2;
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
    ll n,m;cin>>n>>m;
    ll x = exp(2,n)-1; //pow(2,n,mod)-1;
    ll ans = exp(x,m);
    cout<< ans <<'\n';
    

}
return 0;
} //Code Contributed by Harshit Varshney