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
    ll a,b;
    while(n--)
    {
        cin>>a>>b;
        if((a<b or a>b) and a!=b)
        {
            cout<< "Happy Alex" <<'\n';exit(0);
        }
    }
    cout<< "Poor Alex" <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney