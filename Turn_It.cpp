#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll u,v,a,s;cin>>u>>v>>a>>s;
    if(u<=v) cout<< "Yes" <<'\n';
    else {
        if((u*u - v*v)<=2*a*s) cout<< "Yes" <<'\n';
        else cout<< "No" <<'\n';
    }
}
return 0;
}