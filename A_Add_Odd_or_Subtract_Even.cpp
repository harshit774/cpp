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
    ll a,b;cin>>a>>b;
    if(a==b) cout<< 0 <<'\n';
    else if((a>b and (a-b)%2==0) or (b>a and (b-a)&1))
    {
        cout<< 1 <<'\n';
    }
    else cout<< 2 <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney