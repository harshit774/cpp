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
    string st;cin>>st;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        if(st[i]=='1'){
            arr[i]=0;
        }
        else{
            arr[i]++;
            if(i){
                arr[i]+=arr[i-1];
            }
        }
    }
    ll pos=n;
    for(ll i=0;i<n;i++){
        if(st[i]=='1'){
            pos=i;
            break;
        }
    }
    for(ll i=pos;i<n-1;i++){
        if(arr[i]>0 and arr[i+1]==0){
            ll start=i-arr[i]+1;
            ll x=arr[i]/2;
            x=min(x,m);
            for(ll j=start;j<start+x;j++){
                st[j]='1';
            }
            for(ll j=i;j>i-x;j--){
                st[j]='1';
            }
        }
    }
    if(pos<n){
        ll cnt=m;
        for(ll i=pos-1;i>=0 && cnt--;i--){
            st[i]='1';
        }
    }
    if(arr[n-1]>0 and arr[n-1]<n){
        ll start=n-1-arr[n-1]+1;
        for(ll j=start;j<start+m && j<n;j++){
            st[j]='1';
        }
    }
    cout<<st<<endl;
}
return 0;
} //Code Contributed by Harshit Varshney