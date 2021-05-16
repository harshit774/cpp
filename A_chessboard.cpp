#include<iostream>
#define ll long long int 
using namespace std;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1-x2==0 && y1-y2==0)
        { 
            cout<<"SECOND"<<'\n';
        }
        else if(abs(x1-x2)<=1 && abs(y1-y2)<=1)
        {
            cout<<"FIRST"<<'\n';
        }
        else cout<<"DRAW"<<'\n';
    }
    return 0;
}