#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll dp(string s, ll n )  
{  
    ll dp[n];
   
    dp[0] = 1;    
    for (ll i = 1; i < n; i++ )  
    {
        dp[i] = 1;
        for (ll j = 0; j < i; j++ )  
        {
            if ( s[i] >= s[j] and dp[i] < dp[j] + 1)  
                dp[i] = dp[j] + 1;  
        }
    }
    return *max_element(dp, dp+n);
}  
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        string s;cin>>s;
        ll ans = dp(s,n);
        cout<< n-ans <<'\n';
    }
    return 0;
}