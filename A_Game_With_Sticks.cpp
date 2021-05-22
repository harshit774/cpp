#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define fff(i,a,b) for(int i = a; i < b ; i++)
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
ll t=1;//   cin>>t;
while(t--)
{
    ll n,m;cin>>n>>m;
    if(n>m) swap(n,m);
    if(n%2==0) cout<< "Malvika" <<'\n';
    else cout<< "Akshat" <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney