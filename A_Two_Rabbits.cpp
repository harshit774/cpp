#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define YES cout<< 'YES' <<' ';
#define NO cout<< 'NO' <<' ';
#define cc cout<<' ';
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
    ll x,y,a,b;cin>>x>>y>>a>>b;
    if((y-x)%(a+b)==0) cout<< (y-x)/(a+b) <<'\n';
    else cout<< -1 <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney