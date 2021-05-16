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
    ll n,a,b,c;cin>>n>>a>>b>>c;
    int x,y,z,p=0,i;
    i=min(a,min(b,c));
    i=n/i;
    for(x=i;x>=0;x--)
    {
        for(y=0;y<=i;y++)
        {
            z=abs((n-(a*x+b*y))/c);
            if((a*x+b*y+c*z)==n)
            {
               p=max(p,x+y+z);
            }
        }
    }
    cout<<p<<'\n';
}
return 0;
}