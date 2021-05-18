#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-1;i>=0;i--)
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
ll t;cin>>t;
while(t--)
{
    ll n;cin >> n;
    ll a[n], b[n];
    fff(i,0,n) cin>>a[i];
    ll cnt = 0;
    while(cnt<n and a[cnt]==1)
    {
        cnt++;
    }
    if(cnt==n) cnt++;
    if(cnt%2) cout<< "Second" <<'\n';
    else cout<< "First" <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney