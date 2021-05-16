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
    ll x1,y1;cin>>x1>>y1;
    ll x2,y2;cin>>x2>>y2;
    ll ans = max(abs(x1-x2),abs(y1-y2));
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney