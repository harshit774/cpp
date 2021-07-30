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

ll helper(ll n){
    if(n<=6) return 15;
    ll p = n/6;
    n = n - (p*6);
    p *= 15;
    if(n==0) return p;

    if(n<=2){
        p -= 15;
        p += 20;
        return p;
    }
    else {
        if(n<=4){
            p -= 15;
            p += 25;
            return p;
        }
        else{
            p += 15;
            return p;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll ans = helper(n);
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney