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
ll t;cin>>t;
while(t--)
{
    ll n,x,t;cin>>n>>x>>t;
    ll p = t/x;
    p = min(p,n-1);
    ll q = n - p;
    ll mx = (p*(p-1))/2;
    ll mn = p*q;
    ll ans = mx + mn;
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney