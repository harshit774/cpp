#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll c=0;
    string s;cin>>s;
    bool ok=false;
    for(ll i=0;i<n;i++){
        c = c + s[i]-'0';
        if(i+1 <= 2*c)
            ok = true;
    }
    if(ok) cout<< "YES" <<'\n';
    else cout<< "NO" <<'\n';
}
    return 0;
}//Code Contributed by Harshit Varshney
