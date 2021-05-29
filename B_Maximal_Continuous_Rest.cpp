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
ll t=1;//cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll a[n];
    vector<ll> v;
    ll ans=0 , c=0;
    fo(i,0,n)
    {
        cin>>a[i];
    }
    fo(i,0,2)
    {
        fo(j,0,n){
            v.pb(a[j]);
        }
    }
    fo(i,0,v.size())
    {
        if(v[i]==1) {
            c++;
            ans = max(ans,c);
        }
        else {
            c=0;
        }

    }
    cout<< ans <<'\n';

}
return 0;
} //Code Contributed by Harshit Varshney