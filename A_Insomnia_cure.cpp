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
    ll k,l,m,n,d;cin>>k>>l>>m>>n>>d;
    ll ans = d;
    for(ll i=1;i<=d;i++)
    {
        if(i%k!=0 and i%l!=0 and i%m!=0 and i%n!=0) ans--;
    }
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney