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
    ll n;cin>>n;
    ll a[n],c=0;
    ll p=1,h=1;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            c++;
            p=1;
        }
        if(a[i]==a[i-1])
        {
            p++;
            if(p>h) 
            {
                h=p;
            }
        }
    }
    cout<< h << " " << c <<'\n';
}
return 0;
}