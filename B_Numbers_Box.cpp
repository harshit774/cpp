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
    ll sum = 0 , mn = INT_MAX , negative = 0 , xx = 0;
    fo(i,0,n)
    {
        fo(j,0,m){
            cin>>a[i][j];
            if(a[i][j]<0) negative++;
            if(a[i][j]==0) xx++;
            mn = min(mn, abs(a[i][j]));
            sum+=abs(a[i][j]);
        }
    }
    if(negative%2==0) cout<< sum <<'\n';
    else if(xx >=1) cout<< sum <<'\n';
    else cout<< sum-2*mn <<'\n';
    
}
return 0;
} //Code Contributed by Harshit Varshney