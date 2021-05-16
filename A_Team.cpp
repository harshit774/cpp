#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    ll n,n1,n2,n3;cin>>n;
    ll c=0;
    while(n--)
    {
        cin>>n1>>n2>>n3;
        if(n1+n2+n3>=2)
        {
            c++;
        } 
    }
    cout<< c <<'\n';
}
return 0;
}