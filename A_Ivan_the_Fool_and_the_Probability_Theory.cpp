#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define nn '\n' 
#define YES cout<< 'YES' << nn;  
#define NO cout<< 'NO' << nn;  
#define cc cout<< nn;  
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    ll n,m;cin>>n>>m;
    ll ans = 2*((n+m)-1)%mod;
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney