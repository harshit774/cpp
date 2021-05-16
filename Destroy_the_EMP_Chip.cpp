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
ll t,q,d;cin>>t>>q>>d;
while(t--)
{
    ll a = -2e18;
    ll b = 2e18;
    ll x1 = a;
    ll x2 = b;
    ll c = 1LL;
    string s;
    ll mid = (a+b)/2;
    while(a<=b)
    {
        mid = (a+b)/2;
        if(c==1LL)
        {
            cout<< c << " " << mid << x1 <<'\n';
        }
        else
        {
            cout<< c << " " << mid << " " << x1 << " " << mid << " " << x2 <<'\n';
        }
        cin>>s;
        if(s[0]=='X')
        {
            c = 2LL;
        }
        if(s=="O")break;
        if(s[0]=='N') {a = mid + 1LL;}
        if(s[0]=='P'){b = mid - 1LL;}
    }
}
return 0;
} //Code Contributed by Harshit Varshney