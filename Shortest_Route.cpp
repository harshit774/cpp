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
// const int E = 2e3 + 100;
// const int mod = 1e9 + 7;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,m;cin>>n>>m;
    //ll a[n] , b[m];
    vector<ll> a(n);
    for(auto &it:a) cin>>it;
    vector<ll> b(m);
    for(auto &it:b) cin>>it;
    int mx = 65525;
    vector<ll> res(n,0);
    ll xx = -1 , yy = -1;
    fo(i,0,n){
        if(i==0) res[i] = 0;
        else if(a[i]!=0) res[i] = 0;
        else res[i] = mx;
    }
    fo(i,0,n){
        if(a[i]==1) yy = i;
        if(yy!=-1) {
            if(a[i]==0){
                res[i] = min(res[i],i-yy);
            }
        }
    }
    fo(i,n-1,0){
        if(a[i]==2){
            xx = i;
        }
        if(xx!=-1){
            if(a[i]==0){
                res[i] = min(res[i],xx-i);
            }
        }
    }
    fo(i,0,m){
        ll j = b[i] - 1;
        if(res[j]!=mx){
            cout<< res[j] << " ";
        }
        else cout<< -1 << " ";
    }
    cout<<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney