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
    ll a[n];
    fo(i,n) {
        cin>>a[i];
    }
    ll ok = true;
    for(ll i=0;i<n-1;i++)
    {
        if(a[i+1]>=a[i])
        {

        }
        else{
            ok = false;
        }
    }
    if(ok) {
        cout<< 0 << '\n';
        continue;
    }
 
    ll mn = a[0];
    ll mx = a[0];
    fo(i,n) {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    if(a[0] == mn or a[n-1] == mx) {
        cout<< 1 << '\n';
    }
    else if (a[0] == mx and a[n-1] == mn) {
        cout<< 3 << '\n';
    } 
    else
    {
        cout<< 2 << '\n';
    }
    
    

}
return 0;
} //Code Contributed by Harshit Varshney