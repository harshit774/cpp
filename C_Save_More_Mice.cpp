#include<bits/stdc++.h>
#include<iostream>
#define ll long long int
#define fo(a,b,c) for(int a=b;a<c;a++)
#define ff(a,b,c) for(int a=b;a>=c;a--)
#define pb push_back
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;

ll helper(ll n,ll k,ll a[]){
    sort(a,a+k);
    ll p = 0 , q = 0;
    ff(i,k-1,0) {
        if(p+n-a[i] <= n) q++ , p += n - a[i];
        else {break;} 
    }
    ll ans = q , z = 0 , s = k-q;
    fo(i,k-q,k){
        if(z>=a[i]) z += n - a[s++] , ans--;
        z += n - a[i];
    }
    return ans;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,k;cin>>n>>k;
    ll a[k];
    fo(i,0,k) cin>>a[i];
    ll ans = helper(n,k,a);
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney