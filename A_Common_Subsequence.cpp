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
    ll n,m;cin>>n>>m;
    ll a[n],b[m];
    fff(i,0,n) cin>>a[i];
    fff(i,0,m) cin>>b[i];
 
    sort(a,a+n);
    sort(b,b+m);
 
    ll ans = 0;
    ll i=0,j=0;
    while(i<n and j<m)
    {
        if(a[i]==b[j])
        {
            ans = a[i];
            break;
        }
        else if(a[i]<b[j])
        {
            i++;
        }
        else j++;
    }
    if(ans==0) cout<< "NO" <<'\n';
    else
    {
        cout<< "YES" <<'\n';
        cout<< 1 << " " << ans <<'\n';
    }
}
return 0;
} //Code Contributed by Harshit Varshney