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

vector<ll> V;
ll helper(ll k){
    //vector<ll> V;
    ll length = V.size();
    ll z = 1;
    while(length<=1000){
        if(z%3==0 or z%10==0){
            //V.pb(z);
        }
        else{
            V.pb(z);
        }
        z++;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//helper();
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    helper(n);
    cout<< V[n-1] <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney