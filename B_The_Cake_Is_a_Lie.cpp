#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;

bool accepted(ll a,ll b,ll c)
{
    ll x = (a-1)*b;
    if(b-1+x==c)
    {
       return true;
    }
    else
    {
       return false;
    }
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,m,k;cin>>n>>m>>k;
    if(accepted(n,m,k))
    {
        cout<< "YES" <<'\n';
    }
    else {
        cout<< "NO" <<'\n';
    }
}
return 0;
} //Code Contributed by Harshit Varshney