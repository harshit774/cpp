#include<bits/stdc++.h>
#define ll long long
const ll mod=998244353;
const ll z=1e6+1;
using namespace std;
ll pre[z];
ll dp[z][2];

int main()
{
    for(ll i=0;i<z;i++){
        pre[i]=2;
    }
    pre[1]=1;
    for(ll i=2;i<z;i++)
        for(ll j=2*i;j<z;j+=i)
            pre[j]++;
    for(ll i=0;i<z;i++)
        dp[i][0]=0,dp[i][1]=0;
    dp[1][0]=1,dp[1][1]=1;
    for(ll i=2;i<z;i++){
        dp[i][0]=dp[i-1][1]+pre[i];
        dp[i][1]=dp[i-1][1]+dp[i][0];
        dp[i][0]%=mod;
        dp[i][1]%=mod;

    }
    ll n;cin>>n;
    cout<<dp[n][0];
    return 0;
}


// #include<bits/stdc++.h>
// #include<iostream>
// #include<algorithm>
// #include<queue>
// #define ll long long int
// #define pb push_back
// #define fo(a,b,c) for(int a=b;a<c;a++)
// #define ff(a,b,c) for(int a=b;a>=c;a--)
// #define pb push_back
// #define YES cout<< 'YES' << endl 
// #define NO cout<< 'NO' << endl 
// using namespace std;
// const int E = 2e3 + 100;
// const int mod = 1e9 + 7;
// int32_t main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// ll t;cin>>t;
// while(t--)
// {
// }
// return 0;
// } //Code Contributed by Harshit Varshney