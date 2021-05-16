#include<iostream>
#include<algorithm>
#define ll long long int
using namespace std;
int main()
{
    //ll t;cin>>t;
    //while(t--)
    {
        ll n,h,x;cin>>n>>h>>x;
        ll a[n];
        ll max;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        //sort(a,a+n);
        for(ll i=0;i<n;i++)
        {
            max=a[0];
            if(a[i]>max)
                max=a[i];
        }
        if((x+max)>=h) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}