#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-1;i>=0;i--)
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
    ll p,a,b,c;cin>>p>>a>>b>>c;
    ll x = ceil(p/a)*a;
    ll y = ceil(p/b)*b;
    ll z = ceil(p/c)*c;
    ll ans = min(min(x,y),z) - p;
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney