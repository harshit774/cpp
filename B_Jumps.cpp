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
    ll n=0;
    while(n*(n+1)<2*x) n++;
    //if(x==1) cout<< 1 <<'\n';
    if((n*(n+1)/2)==x+1) n++;
    cout<< n <<'\n';
    
}
return 0;
} //Code Contributed by Harshit Varshney