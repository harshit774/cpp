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
    ll n,m;cin>>n>>m;
    ll a[n][m];
    fo(i,0,n){
        fo(j,0,m){
            a[i][j] = 0;
        }
    }
    a[0][0] = 1;
    a[n-1][0] = 1;
    a[0][m-1] = 1;
    a[n-1][m-1] = 1;
    if(n&1){
        for(ll i=2;i<n;i=i+2){
            a[i][0] = 1;
            a[i][m-1] = 1;
        }
    }
    else{
        for(ll i=3;i<n;i=i+2){
            a[i][0] = 1;
            a[i][m-1] = 1;
        }
    }
    if(m&1){
        for(ll i=2;i<m;i=i+2){
            a[0][i] = 1;
            a[n-1][i] = 1;
        }
    }
    else {
        for(ll i=3;i<m;i=i+2){
            a[0][i] = 1;
            a[n-1][i] = 1;
        }
    }
    fo(i,0,n){
        fo(j,0,m){
            cout<< a[i][j];
        }
        cout<<'\n';
    }
    cout<< '\n';
}
return 0;
} //Code Contributed by Harshit Varshney