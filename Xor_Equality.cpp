#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-1;i>=0;i--)
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll ans = 1;
    ll a = 2 , b = n-1;
    while(b!=0)
    {
        if(b%2!=0)
        {
            ans = (ans*a)%mod;
        }
        a = (a*a)%mod;
        b >>= 1;
    }
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney