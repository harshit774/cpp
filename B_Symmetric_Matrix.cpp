#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-1;i>=0;i--)
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
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
    ll n,m;cin>>n>>m;
    bool ok = false;
    while(n--)
    {
        ll a,b,c,d;cin>>a>>b>>c>>d;
        if(b==c and m%2==0) 
        {
            ok = true;
        }
    }
    if(!ok) cout<< "NO" <<'\n';
    else cout<< "YES" <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney