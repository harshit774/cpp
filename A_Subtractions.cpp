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
    ll a,b;
    while(n--)
    {
        cin>>a>>b;
        ll cnt = 0;
        if(a>b) swap(a,b);
        while(b>0)
        {
            cnt+=b/a;
		    if(b%a==0) break;
		    ll temp=a;
		    a=b%a;
		    b=temp;
        }
        cout<< cnt <<'\n';
    }
}
return 0;
} //Code Contributed by Harshit Varshney