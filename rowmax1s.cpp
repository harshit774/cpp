#include<bits/stdc++.h>
#include<iostream>
#define ll long long int
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
            cin>>a[i][j];
        }
    }
    ll c = 0 , mx = INT_MIN , row = 0;
    fo(i,0,n){
        fo(j,0,m){
            if(a[i][j]==1) c++;
        }
        if(c > mx){
            mx = c;
            row = i;
        }
    }
    cout<< row <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney