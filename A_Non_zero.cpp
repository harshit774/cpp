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
    ll a[n];
    ll sum = 0, ans = 0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            a[i]++;
            ans++;
        }
        sum+=a[i];
    }
    if(sum==0) ans++;
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney