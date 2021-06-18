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
    ll n,m,a,b;cin>>n>>m>>a>>b;
    ll p = min(n-a+b-a, a-1+b-1);
    ll q = min(abs(n-a)+abs(b-a), abs(m-b)+abs(1-a));
    if(p>q) cout<< 1 << " " << 1 << " " << n << " " << m <<'\n';
    else cout<< n << " " << 1 << " " << 1 << " " << m <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney