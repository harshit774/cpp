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
    ll n,k;cin>>n>>k;
    for(ll i=1;i<=k;i++)
    {
        cout<< n-(i-1) <<" ";
    }
    for(ll i=1;i+k<=n;i++)
    {
        cout<< i <<" ";
    }

}
return 0;
} //Code Contributed by Harshit Varshney