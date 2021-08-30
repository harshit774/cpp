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
    ll n,k;cin>>n>>k;
    ll a[n];
    fo(i,0,n) cin>>a[i];
    sort(a,a+n);
    fo(i,0,k){
        if(a[i]<0) {
            a[i] = abs(a[i]);
        }
        else{
            break;
        }
    }
    ll ans = 0;
    for(auto i : a){
        if(i>0){
            ans += i;
        }
    }
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney