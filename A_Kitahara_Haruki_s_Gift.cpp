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
    ll a[n],count=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        //sum+=a[i];
        if(a[i]==100)
        {
            count++;
        }
    }
    if((count==0 and n%2) or count%2) cout<< "NO" <<'\n';
    else cout<< "YES" <<'\n';
    // ll ans = sum/100;
    // if(ans%2==1) cout<< "NO" <<'\n';
    // else cout<< "YES" <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney