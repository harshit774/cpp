#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;

void Accepted()
{
    ll n;cin>>n;
    ll ans = 0;
    ll m;
    if(n%2050!=0) {
        cout<< -1 <<'\n';return;
    }
    ll z = n/2050;
    while(z>0)
    {
        m = z%10;
        ans+=m;
        z/=10;
    }
    cout<< ans <<'\n';
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    Accepted();

}
return 0;
} //Code Contributed by Harshit Varshney