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
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,h;cin>>n>>h;
    ll a[n];
    for(ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
	ll sum = a[n]+a[n-1];
	ll cnt = h/sum , p = h-cnt*sum , k;
	if(p > a[n]) {k=2;}
	else {k = 1;}
	if(p == 0) k = 0;
    cout<< cnt*2+k <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney