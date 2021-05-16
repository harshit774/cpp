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
ll t=1;//cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll c=1,mx=1;
    ll a[n];
    for(ll i=0;i<n;i++) 
    {
        cin>>a[i];
    }// 2 2 1 3 4 1 
    for(ll i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        { 
            c++;
            if(c>mx)
            {
                mx=c;
            }
            //else c=1;
        }
        else c=1;
    }
    cout<< mx <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney