#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;

bool CTS(ll n)
{
    set<ll> st;
    ll i = 1;
    while (1) {
        ll x = i * (i + 1) / 2;
        if (x >= n)
            break;
        st.insert(x);
        i++;
    }
  
    for (auto z : st)
        if (st.find(n - z) != st.end())
            return true;
    return false;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    ll n;cin>>n;
    CTS(n) ? cout << "YES" : cout << "NO";
}
return 0;
} //Code Constbuted by Harshit Varshney