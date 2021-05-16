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
    ll n;cin>>n;
    ll sum=0,r=0;
    int a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ll s,t;cin>>s>>t;
    if(s>t) swap(s,t);
    for(int j=s-1; j<t-1; j++) r+=a[j];
    cout<< min(r,sum-r) <<'\n';

}
return 0;
} //Code Contributed by Harshit Varshney