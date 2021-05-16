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
ll t;cin>>t;
while(t--)
{
    ll N;cin>>N;
    ll pre[N]={0};
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];  
    if(is_sorted(A,A+N))
    {
        cout<<"YES\n0\n";return 0;
    }
    ll c=0;
    for(ll i=0;i<N;++i)
    {
        if(A[i]>A[(i+1)%N])++c;
        //cout<<i<<' '<<(i+1)%N <<' '<<c<<'\n';
    }
    if(c>1)cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        if(c==0)cout<<"0\n";
        else cout<< c<<'\n';
    }
    
}
return 0;
}