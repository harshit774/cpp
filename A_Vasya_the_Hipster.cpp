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
    ll a,b;cin>>a>>b;
    ll ans = max((a-min(a,b))/2,(b-min(a,b))/2);
    cout<<min(a,b)<<" "<<ans<<endl;
    //cout<< min(a,b)<<" "<<abs(a-b)/2<<endl;
}
return 0;
} //Code Contributed by Harshit Varshney