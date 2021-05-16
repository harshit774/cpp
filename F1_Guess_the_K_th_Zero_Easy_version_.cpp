#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-1;i>=0;i--)
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;

ll ask(ll n){
    cout<< "? " << 1 << " " << n+1 <<'\n';
    ll res;cin>>res;
    return res;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,t;cin>>n>>t;
    ll k;cin>>k;
    ll l=0,h=n-1;
    while(l<h){
        ll mid=(l+h)>>1;
        ll res=ask(mid);
        ll num_zeros=(mid+1-res);
        if(num_zeros<k){
            l=mid+1;
        }
        else{
            h=mid;
        }
    }
    cout<< "! " << l+1 <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney