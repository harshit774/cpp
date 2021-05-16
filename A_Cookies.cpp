#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;cin>>n;
    ll a;
    ll es=0,os=0;
    while(n--)
    {
        cin>>a;
        if(a%2==0) es++;
        else os++;
    }
    if(os%2==0)
    {
        cout<< es <<'\n';
    }
    else cout<< os <<'\n';
return 0;
}