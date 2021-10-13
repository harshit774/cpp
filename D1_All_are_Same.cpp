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

ll helper(ll n,ll a[]){
    sort(a,a+n);
    ll ans = 0;
    fo(i,1,n){
        ans = __gcd(ans,a[i] - a[i-1]);
    }
    if(ans==0){
        return -1;
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
    ll n;cin>>n;
    ll a[n];
    fo(i,0,n) cin>>a[i];
    ll ans = helper(n,a);
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney