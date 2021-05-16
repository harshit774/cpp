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
    ll n,m;cin>>n>>m;
    ll a[n][m];
    ll ans = 0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < n; ++i){   
    bool wasBest = false;
    for(int j = 0; j < m; ++j){
        bool isBest = true;
        for(int k = 0; k < n; ++k)
            if(a[k][j] > a[i][j])
                isBest = false;
        if(isBest)        
            wasBest = true;
    }
    if(wasBest)
        ans++;
    cout<< ans <<'\n';
}  
}
return 0;
} //Code Contributed by Harshit Varshney