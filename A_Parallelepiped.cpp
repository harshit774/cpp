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
    ll a,b,c,d;cin>>a>>b>>c>>d;
    d=sqrt(a*b*c);
    ll ans = 4*((a*b)/d + (b*c)/d + (a*c)/d);
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney