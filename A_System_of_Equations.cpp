
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll N,M;cin>>N>>M;
    ll ans=0;
    for(ll i=0;i<=1000;++i)
    {
        for(ll j=0;j<=1000;++j)
        {
            ll p = i*i + j;
            ll q = i + j*j;
            if(p==N and q==M)++ans;
        }
    }
    cout<<ans<<'\n';
	return 0;
}
