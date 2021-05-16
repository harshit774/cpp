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
    string s;cin>>s;
    //bool ok = false;
    for(ll i=0;i<=4;i++)
    {
        if(s.substr(0,i)+s.substr(n-4+i,4-i)=="2020") {
            cout<< "YES" <<'\n';return;
        }
    }
    cout<< "NO" <<'\n';
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