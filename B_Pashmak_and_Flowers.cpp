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
    ll c1 = 0 , c2 = 0 , z = 0;
    ll b[n];
    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(b,b+n);
    ll mx = b[n-1];
    ll mn = b[0];
    if(mn==mx)
    {
        if(n%2==0) z=(n/2*(n-1));
        else z=(n/2*n);
    }
    else
    {
        for(ll i=0;i<n;i++)
        {
            if(b[i]==mn) c2++;
            if(b[i]==mx) c1++;
        }
        z=c2*c1;
    }
    cout<< mx-mn << " " << z <<'\n'; 
}
return 0;
} //Code Contributed by Harshit Varshney