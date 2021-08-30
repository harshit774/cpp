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

ll helper(ll n,ll p,ll k){
    ll count = 0 , rem = 0;
    fo(i,0,k){
        for(ll j=i;j<n;j+=k){
            if(j==p){
                count++ , rem = 1;
                break;
            }
            count++;
        }
        if(rem!=0) break;
    }
    return count;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,p,k;cin>>n>>p>>k;
    ll ans = helper(n,p,k);
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney