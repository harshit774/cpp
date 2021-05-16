#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define nn \n
// #define abc cout<< 'YES' << 'nn'
// #define cba cout<< 'NO' << 'nn'
#define cc cout<< 'nn';  
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    //solve();
    ll n;cin>>n;
    ll sum = 0;
    ll a[n],b[n];
    fo(i,n) cin>>a[i] , sum+=a[i];
    fo(i,n) cin>>b[i];
    sort(b,b+n);
    ll ans = b[n-1] + b[n-2];
    if(sum<=ans){
        //YES;
        cout<< "YES" <<'\n';
    }
    else{
        //NO;
        cout<< "NO" <<'\n';
    }
}
return 0;
} //Code Contributed by Harshit Varshney