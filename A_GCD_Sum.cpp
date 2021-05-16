#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
//const int N = 2e3 + 100;
const int mod = 1e9 + 7;

ll gcdsum(ll s)
{
    ll sum=0;
    while(s)
    {
        sum+=s%10;
        s=s/10;
    }
    return sum;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    //cout<< result[n] <<'\n';
    while(__gcd(n,gcdsum(n))==1){
        n++;
    }
    cout<< n <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney

