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
    ll n;cin>>n;
    // vector<ll> a,b;
    // ll x;
    // for(ll i=0;i<n;i++)
    // {
    //     cin>>x;
    //     if(x%2==1){
    //         b.push_back(x);
    //     }
    //     else {
    //         a.push_back(x);
    //     }
    // }
    // for(auto i:b)
    // {
    //     cout<< i << " ";
    // }
    // for(auto i:a)
    // {
    //    cout<< i << " "; 
    // }
    // cout<< '\n';
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
        //cin>>a[i];
        if(a[i]%2==1)
        {
            cout<< a[i] << " ";
        }
    }
    for(ll i=0;i<n;i++)
    {
        //cin>>a[i];
        if(a[i]%2==0)
        {
            cout<< a[i] << " ";
        }
    }
    cout<< '\n';
    
}
return 0;
} //Code Contributed by Harshit Varshney