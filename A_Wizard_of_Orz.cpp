#include <iostream>
#define ll long long int
using namespace std;
int main()
{
    ll tt;cin>>tt;
    while(tt--)
    {
        ll n;cin>>n;
        ll k=0;
        if(n==1)
        {
            cout<<9<<endl;
        }
        else if(n==2)
        {
            cout<<98<<endl;
        }
        else if(n==3)
        {
            cout<<989<<endl;
        }
        else
        {
            cout<<989;
            for(int i=3;i<n;i++)
            {
                if(k==10)
                {
                    k=0;
                    
                }
                cout<<k++;
                
            }
            cout<<endl;
        }
        
        
    }
    return 0;
}