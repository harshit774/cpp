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
    ll A,Y,X;cin>>A>>Y>>X;
    if(A>=Y) cout<< X*Y <<'\n';
    else cout<< X*A+1 <<'\n';
}
return 0;
}