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
    ll a[n],sum=0;
    ll oc=0,ec=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]%2)oc++;
        else ec++;
    }
    if(sum%2) cout<< "YES" <<'\n';
    else if(oc==0 and ec==0) cout<< "YES" <<'\n';
    else cout<< "NO" <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney