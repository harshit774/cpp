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
    ll X,R,M;cin>>X>>R>>M;
    if(X>=60*R)
    {
        if(R<=M) cout<< "YES" <<'\n';
        else cout<< "NO" <<'\n';
    }
    else
    {
        if(X+2*(60*R-X)<=60*M) cout<< "YES" <<'\n';
        else cout<< "NO" <<'\n';
    }
}
return 0;
}