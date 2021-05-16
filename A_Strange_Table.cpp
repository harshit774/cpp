#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--)
    {
        ll n,m,x;cin>>n>>m>>x;
        ll a=(x+n-1)/n;
        ll b=x-(a-1)*n;
        cout<<(b-1)*m + a<<'\n';
    }
    return 0;
}