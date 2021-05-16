#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
//const int mod = 1e9 + 7;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll sum = 0;
    ll a[n];
    ll mx;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        // if(a[i]>mx)
        // {
        //     //mx = a[i];
        //     a[i]=mx;
        // }
    }
    mx = a[0];
    for(ll i=0;i<n;i++)
    {
        if(a[i]>mx)
        {
            mx = a[i];
        }
    }
    cout<< max((sum-1)/(n-1)+1,mx) <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney