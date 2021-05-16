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
    ll n;cin>>n;
    if(n==1) cout<< 20 <<'\n';
    else if(n==2) cout<< 36 <<'\n';
    else if(n==3) cout<< 51 <<'\n';
    else if(n==4) cout<< 60 <<'\n';
    else {
        ll rem = n%4;
        ll ans = ((n-rem)/4)*44;
        if(rem==0)
        {
            ans+=16;
        } 
        else if(rem==1)
        {
            ans+=32;
        }
        else if(rem==2)
        {
            ans+=44;
        }
        else if(rem==3)
        {
            ans+=55;
        }
        cout<< ans <<'\n';

    }
}
return 0;
}