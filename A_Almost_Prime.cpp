#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
//const int N = 2e3 + 100;
const int mod = 1e9 + 7;
vector<ll> fun(ll N)
{
    vector<ll> V;
    for(ll i=2;i*i<=N;++i)
    {
        if(N%i==0)
        {
            if(i*i==N)V.push_back(i);
            else V.push_back(N/i),V.push_back(i);
        }
    }
    sort(V.begin(),V.end());
    return V;
}
void solve()
{
    ll N;cin>>N;
    set<ll> V;V.insert(2);
    for(ll i=3;i<=N;i+=2)
    {
        bool ok=false;
        for(ll j=2;j*j<=i;++j)
        {
            if(i%j==0)
            {
                ok=true;break;
            }
        }
        if(!ok)
        {
            V.insert(i);
        }
    }
    //sort(V.begin(),V.end());
    // for(auto i : V)cout<<i<<' ';cout<<'\n';
    ll ans=0;
    for(ll i=2;i<=N;++i)
    {
        vector<ll> A = fun(i);
        //for(auto j : A)cout<<j<<' ';cout<<'\n';
        ll c=0;
        for(ll j=0;j<A.size();++j)
        {
            if(V.find(A[j])!=V.end())++c;
        }
        if(c==2)++ans;//,cout<<i<<' ';
    }
    cout<<ans<<'\n';

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    solve();
}
return 0;
}