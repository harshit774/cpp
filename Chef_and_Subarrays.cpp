#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define fff(i,a,b) for(int i = a; i < b ; i++)
#define pb push_back
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;

// ll helper(ll a[],ll n,ll k)
// {
//     if(k==n){
//         return 0;
//     }
//     ll res = 0;
//     fff(i,0,k)
//     {
//         ll j=i;
//         map<ll,ll> mp;
//         ll mx = 0 , x = 0;
//         while(j<n)
//         {
//             mp[a[j]]++;
//             mx = max(mx,mp[a[j]]);
//             j+=k , x++;
//         }
//         res = res + x - mx;
//     }
//     return res;
// }

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,k;cin>>n>>k;
    ll ans = 0;
    ll a[n];
    fo(i,n) cin>>a[i];
    //helper(a,n,k);
    if(k==n){
        cout<< 0 <<'\n';//return 0;
        continue;//exit(0);
    }
    ll res = 0;
    fff(i,0,k)
    {
        ll j=i;
        map<ll,ll> mp;
        ll mx = 0 , x = 0;
        while(j<n)
        {
            mp[a[j]]++;
            mx = max(mx,mp[a[j]]);
            j+=k , x++;
        }
        res = res + x - mx;
    }
    //return res;
    cout<< res <<'\n';

}
return 0;
} //Code Contributed by Harshit Varshney