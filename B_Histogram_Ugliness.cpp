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
    ll n;cin>>n;
    //ll v[n];
    vector<ll> v(n);
    fo(i,0,n) cin>>v[i];
    if(n==1){
        cout<< v[0] <<'\n';
        exit(0);
    }
    ll ans=0;
    fo(i,0,n){
        if(!i){
            ans+=v[i];
        }
        else{
            ans+=abs(v[i]-v[i-1]);
        }
    }
    ans+=v.back();
    fo(i,0,n){
        if(i==0){
            ans-=max(0ll, v[i]-v[i+1]);
        }
        else if(i>0 && i<n-1){
            ans-=max(0ll, v[i]-max(v[i-1], v[i+1]));
        }
        else{
            ans-=max(0ll, v[i]-v[i-1]);
        }
    }
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney