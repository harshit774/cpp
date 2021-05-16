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
    ll n,x;cin>>n>>x;
    ll ans = 0;
    for(ll i=1;i<n+1;i++)
    {
        if(x%i==0 and x/i<=n)
        {
            ans++;
        }
    }
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney