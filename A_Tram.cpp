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
    ll n,a,b;cin>>n;
    ll mx=0,i=0;
    while(n--)
    {
        cin>>a>>b;
        mx = max(mx,i-a+b);
        i = i-a+b;
    }
    cout<< mx <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney