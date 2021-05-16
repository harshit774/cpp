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
ll t=1;//cin>>t;
while(t--)
{
    ll n,q;cin>>n;
    ll sum=0;
    while(n--)
    {
        ll x;cin>>x;
        sum+=x;
        sum=(sum+mod)%mod;
    }
    sum%=mod;
    cin>>q;
    while(q--)
    {
        sum=(sum*2)%mod;
        cout<< sum <<'\n';
    }
}
return 0;
} //Code Contributed by Harshit Varshney