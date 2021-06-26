#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
using namespace std;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll a,b;cin>>a>>b;
    while(b%2==0){
        b = b/2;
    }
    if(b==1) cout<< "Yes" <<'\n';
    else cout<< "No" <<'\n';
}
return 0;
} //Code Contributed by Adarsh Rathore