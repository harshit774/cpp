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
    for(ll i=2;i*i<=n;i++)
    {
        while(n%(i*i)==0){
            n/=i;
        }
        
    }
    cout<< n <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney