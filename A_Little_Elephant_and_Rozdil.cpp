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
    //ll count = 1,mn_i = 0;
    ll a[n],b[n];
    //ll mn=a[0];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(ll i=1;i<n;i++)
    {
        if(b[i]==b[0])
        {
            cout<< "Still Rozdil" <<'\n';exit(0);
        }
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i]==b[0])
        {
            cout<< i+1 <<'\n';exit(0);//break;
        }
    }
    
    
}
return 0;
} //Code Contributed by Harshit Varshney