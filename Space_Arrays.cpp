#include<iostream>
#include<algorithm>
#define ll long long int
using namespace std;

void code()
{
    ll n;cin>>n;
    ll a[n];
    //ll sum=0;
    ll v=0;
    ll flag=0;
    //sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        //sum+=a[i];
    }
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        if((i+1-a[i])<0)
        {
            flag=1;
            break;
        }
        v=v+(i+1-a[i]);
    }
    if(flag==1) cout<<"Second"<<'\n';
    else
    {
        if(v%2==1) cout<<"First"<<'\n';
        else cout<<"Second"<<'\n';
    }
}
int main(void)
{
    ll t;
    cin>>t;
    while(t--)
    {
        code();
    }
    exit(0);
    return 0;
}