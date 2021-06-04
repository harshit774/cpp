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
    vector<ll> v(n);
    fo(i,0,n) cin>>v[i];
    vector<ll> arr;
    fo(i,0,n){
        if(!(v[i] & 1)){
            arr.pb(v[i]);
        }
    }
    fo(i,0,n){
        if(v[i]&1){
            arr.pb(v[i]);
        }
    }
    ll sol = 0;
    fo(i,0,n){
        ff(j,i-1,0){
            if(__gcd(2*arr[i],arr[j])>1){
                sol++;
            }
        }
    }
    cout<< sol <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney