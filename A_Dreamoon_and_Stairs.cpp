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
    ll n,m;cin>>n>>m;
    ll z = (n+2*m-1);
    if(m>n) cout<< -1 <<'\n';
    else cout<< z/2/m*m <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney