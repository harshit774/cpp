#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isPrime(ll x)
{
    //ll skip=0;
    if(x<2)
        return false;
    else if(x==2)
        return true;
    if(x%2==0)
        return false;
        for(int i=3; i<=sqrt(x); i+=2){
            if(x%i==0)
                return false;
            }
    return true;
}
int main()
{
    ll n;
    ll t;cin>>t;
    while(t--){
        cin>>n;
        ll sqr=sqrt(n);
        if(sqr*sqr==n && isPrime(sqr)==true) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}