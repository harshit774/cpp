#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;

// int countFreq(int arr[], int n)
// {
//     unordered_map<int, int> mp;
//     for (int i = 0; i < n; i++)
//         mp[arr[i]]++;
//     ll ans=0;
//     for (auto x : mp){
//         if(x.second==1)
//         {
//             ans=x.first;break;
//         }
//     }
//     for(ll i=0;i<n;++i)
//     {
//         if(arr[i]==ans)
//         {
//             cout<<i+1<<'\n';
//         }
//     }
        
// }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    // ll n;cin>>n;
    // int a[n];
    // for(ll i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    // countFreq(a, n);
    ll n;
        cin>>n;
        vector<ll> ar(n);
        for(ll i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int i=1;i<n-1;i++)
        {
            if(ar[i-1]==ar[i+1] and ar[i]!=ar[i-1])
            {
                cout<<i+1<<"\n";
            }
        }
        if(ar[1]==ar[2] and ar[0]!=ar[1])
        {
            cout<<1<<"\n";
        }
        if(ar[n-2]==ar[n-3] and ar[n-1]!=ar[n-2])
        {
            cout<<n<<"\n";
        }
}
return 0;
} //Code Contributed by Harshit Varshney