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
    ll mn = a[1] , mx = a[1];
    fo(i,1,n+1){
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    fo(i,2,n+1){
        mn = max(mn, a[i]*a[i-1]);
    }
    return mn;
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
    fo(i,1,n+1){
        cin>>a[i];
    }
    ll ans = helper(n,a);
    
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney