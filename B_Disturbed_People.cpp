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
    ll a[n];
    ll count = 0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=1;i<n-1;i++)
    {
        if(a[i-1]==1 and a[i]==0 and a[i+1]==1)
        {
            count++;
            a[i+3]=0;
        }
    }
    cout<< count <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney