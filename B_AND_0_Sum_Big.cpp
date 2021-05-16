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
    ll n,k;cin>>n>>k;
    ll ans = 1;
    for(ll i=0;i<k;i++)
    {
        ans = (ans*n)%mod;
    }
    cout<< ans%mod <<'\n';
    
}
return 0;
} //Code Contributed by Harshit Varshney