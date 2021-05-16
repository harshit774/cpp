#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
//const int N = 2e3 + 100;
const int mod = 1e9 + 7;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    ll N = 300000;
    ll pre[N+5];
    pre[0] =  0;
    pre[1] = 2;
    for(ll i=2;i<=N;++i)
    {
        ll a = sqrt(i);
        ll p = i*a + (i+1)/2 ;
        pre[i] = pre[i-1] + p; 
        //cout<<p<<' ';
    }  
    ll Q;cin>>Q;
    while(Q--)
    {
        ll l,r;cin>>l>>r;
        ll a = lower_bound(pre,pre+N,l) - pre;
        ll b = lower_bound(pre,pre+N,r) - pre;
        cout<< abs(a-b) + 1 <<'\n';
    }
}
return 0;
}//Code Contributed by Harshit Varshney