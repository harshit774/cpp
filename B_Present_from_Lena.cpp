#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll N;cin>>N;
    for(ll i=0;i<=N;++i)
    {
        ll a=0;
        for(ll j=0;j<N-i;++j)cout<<"  ";
        for(ll j=0;j<i;++j)cout<<j<<' ';
        cout<<i;
        for(ll j=i-1;j>=0;--j)cout<<' '<<j;
        cout<<'\n';
    }
    for(ll i=N-1;i>=0;--i)
    {
        ll a=0;
        for(ll j=0;j<N-i;++j)cout<<"  ";
        for(ll j=0;j<i;++j)cout<<j<<' ';
        cout<<i;
        for(ll j=i-1;j>=0;--j)cout<<' '<<j;
        cout<<'\n';
    }
return 0;
}