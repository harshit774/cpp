#include<bits/stdc++.h>
#include<vector>
#define ll long long int
using namespace std;

void code()
{
    ll n,e,h,a,b,c;
    cin>>n>>e>>h>>a>>b>>c;
    vector<ll> v,p;
    for(int i=0;i<=n+1;i++)
    {p.push_back(i);}
    for(int m=0;m<=n;m++)
    {
        ll ind1=lower_bound(p.begin(),p.end(),(2*n-e-2*m)) - p.begin();
        ll ind2=upper_bound(p.begin(),p.end(),(h-3*m)) - p.begin()-1;
        if(ind2<ind1 or ind1==n+1) {continue;}
        if(ind2==n+1 and ind2+3*m>h) {continue;}

        ll x;
        if(c>a) x=(ind1<(n-m)?ind1:(n-m));
        else x=(ind2<(n-m)?ind2:(n-m));

        ll y=n-x-m;
        if((x+2*m)>=(2*n-e) and (x+3*m)<=h)
        {
            v.push_back(a*y+b*m+c*x);
        }
    }
    if(v.size()==0)cout<<-1<<'\n';
    else 
    {
        ll ans=v[0];
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<ans) ans=v[i];
        }
        cout<<ans<<'\n';

    }
}
int main(void)
{
    ll t;cin>>t;
    while(t--){code();}exit(0);
    return 0;
}