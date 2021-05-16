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
    ll so=0,ans=0;
    ll a , mo = 1e15;
    while(n--)
    {
        cin>>a;
        if(a%2==0)
        {
            ans+=a;
        }
        else{
            so+=a;
            mo=min(mo,a);
        }
    }
    cout<< ans + (so%2==0 ? so : so-mo) <<'\n';
}
return 0;
}
