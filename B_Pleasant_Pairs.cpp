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

ll helper(ll n,ll a[],ll b[]){
    ll m = 2*n+1;
    fo(i,0,m){
        b[i] = 10000006;
    }
    fo(i,0,n){
        b[a[i]] = i+1;
    }
    int c = 0;
    fo(i,3,2*n){
        for(ll j=1;j<=sqrt(i);j++){
            if(i%j==0 and i!=j*j){
                if(b[j]+b[i/j]==i) c++;
            }
        }
    }
    return c;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll m = 2*n+1;
    ll a[n], b[m];
    fo(i,0,n) {
        cin>>a[i];
    }
    ll ans = helper(n,a,b);
    cout << ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney