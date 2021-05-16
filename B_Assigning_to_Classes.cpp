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
    ll m = 2*n;
    ll a[m];
    for(ll i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    cout<< abs(a[n]-a[n-1]) <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney