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
    ll k;cin>>k;
    ll n = 100-k;
    if(k==100) cout << 1 << '\n';
    else {
        ll p = __gcd(k,100-k);
        if(p>1)
        {
            n = n/p;
            k = k/p;
        }
        cout<< n+k <<'\n';
    }
}
return 0;
} //Code Contributed by Harshit Varshney