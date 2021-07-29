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

ll helper(ll n,ll m){
    ll res = 1e9+1;
    ll k = 0;
    ff(i,30,0){
        if((n&(1<<i)) and (m&(1<<i))) continue;
        else if((n&(1<<i))){
            res = min(res,k);
        }
        else if((m&(1<<i))){
            k += (1<<i);
            continue; 
        }
        else{
            res = min(res,k+(1<<i));
            continue;
        }
    }
    return res;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,m;cin>>n>>m;
    ll ans = helper(n,m);
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney