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
ll t=1; cin>>t;
while(t--)
{
    ll n,q;cin>>n>>q;
    ll a[n];
    fo(i,0,n) cin>>a[i];
    sort(a,a+n);
    while(q--){
        ll x;cin>>x;
        ll p = lower_bound(a,a+n,x)-a;
        if(p<n and a[p]==x) cout<< 0 <<'\n';
        else if(p&1) cout<< "NEGATIVE" <<'\n';
        else cout<< "POSITIVE" <<'\n';
    }
}
return 0;
} //Code Contributed by Harshit Varshney