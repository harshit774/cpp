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
ll t=1;//cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll a[n];
    fo(i,n) {
        cin>>a[i];
    }
    if(a[n-1]==15) {
        cout<< "DOWN" <<'\n';
        exit(0);
    }
    if(a[n-1]==0) {
        cout<< "UP" <<'\n';
        exit(0);
    }
    if(n==1) {
        cout<< -1 <<'\n';
        exit(0);
    }
    for(ll i=n-2;i>=0;i--)
    {
        if(a[i]>a[n-1])
        {
            cout<< "DOWN" <<'\n';exit(0);
        }
        else if(a[i]<a[n-1]) {
            cout<< "UP" <<'\n';exit(0);
        }
    }
    cout<< -1 <<'\n';exit(0);
}
return 0;
} //Code Contributed by Harshit Varshney