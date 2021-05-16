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
    ll x;cin>>x;
    ll sum = 0;
    ll ans = 1;
    for(ll i=9;i>=0;i--)
    {
        if(x>=i)
        {
            x=x-i;
            sum = sum + (ans*i);
            ans = ans*10;
        }
    }
    if(x==0) cout<< sum <<'\n';
    else cout<< -1 <<'\n';
    //ll sum =0,m;
    // if()
    // while(x>0)    
    // {    
    //     m=x%10;    
    //     sum=sum+m;    
    //     x=x/10;    
    // } 
}
return 0;
} //Code Contributed by Harshit Varshney