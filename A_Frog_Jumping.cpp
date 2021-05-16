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
    ll a,b,k;cin>>a>>b>>k;
    if(k&1)
    {
        cout<< ((a-b)*(k/2)) + a <<'\n';
    }
    else cout<< (a-b)*(k/2) <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney