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
    ll ans = 0;
    while(n>=10)
    {
        ll x = n/10;
        ans+=x*10;
        n=n%10;
        n+=x;
    }
    ans+=n;
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney