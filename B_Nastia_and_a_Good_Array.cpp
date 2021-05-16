#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-1;i>=0;i--)
#define Ct continue;
#define YES cout<< 'YES' << endl; 
#define NO cout<< 'NO' << endl; 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll a[n];fo(i,n) cin>>a[i];
    if(n==1) {
        cout<< 0 <<'\n';
        Ct
    }
    cout<< (n+1)/2 <<'\n';
    for(ll i=0;i<n;i+=2)
    {
        ll p = min(a[i],a[i+1]);
        if(i==n-1) Ct
        cout<< i+1 << " " << i+2 << " " << mod << " " << p <<'\n';
        a[i+1]=min(a[i],a[i+1]);
    }
    ll x = a[n-1];
    ll y = a[n-2];
    if(n%2==1) cout<< n-1 << " " << n << " " << min(x,y) << " " << mod <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney