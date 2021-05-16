#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
//const int N = 2e3 + 100;
const int mod = 1e9 + 7;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,m;cin>>n>>m;
    ll x,y;cin>>x>>y;
    ll a,b;cin>>a>>b;
    ll p = max(abs(n-a),abs(m-b));
    ll q = abs(n-x) + abs(m-y); 
    if(p<q) cout<< "NO" <<'\n';
    else if(x<=a and y<=b) cout<< "NO" <<'\n';
    else cout<< "YES" <<'\n';  
}
return 0;
} //Code Contributed by Harshit Varshney