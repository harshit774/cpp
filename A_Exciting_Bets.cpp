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
    ll a,b;cin>>a>>b;
    if(a==b) cout<< 0 << " " << 0 <<'\n';
    else if(a>b){
        ll ans = a-b;
        ll sol = min(b%ans,ans-b%ans);
        cout<< ans << " " << sol <<'\n';
    }
    else {
        ll ans = b-a;
        ll sol = min(a%ans,ans-a%ans);
        cout<< ans << " " << sol <<'\n';
    }
}
return 0;
} //Code Contributed by Harshit Varshney