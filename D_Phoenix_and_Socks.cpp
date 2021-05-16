#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define cc cout<<'\n'
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
    ll n,l,r;cin>>n>>l>>r;
    ll sum = 0;
    ll c[n];
    fo(i,n) cin>> c[i] , sum+=c[i];
    cout<< sum <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney