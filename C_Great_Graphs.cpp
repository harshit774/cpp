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

ll helper(ll n,ll a[]){
    sort(a,a+n);
    ll p = 0, q = 0;
    fo(i,2,n) {
        q += a[i-2];
        p -= (a[i]*(i-1));
        p += q;
    }
    return p;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll a[n];
    fo(i,0,n) cin>>a[i];
    ll ans = helper(n,a);
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney