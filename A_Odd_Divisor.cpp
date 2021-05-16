#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
   ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll x=1;
        ll flag=0;
        while(n%x==0)
        {
            if(x%2!=0 and x!=1)
            {
                flag=1;
                break;
            }
            else
            {
                for(int i=x+1;i<=n;i++)
                {
                    if(n%i==0)
                    {
                        x=i;
                        break;
                    }
                }
            }
        }
        if(flag==0)cout<<"NO\n";
        else cout<<"YES\n";

    }
	return 0;
}
