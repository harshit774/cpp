#include<iostream>
#include<math.h>
#define ll long long int
using namespace std;

void code()
{
    ll c;cin>>c;
    ll s=0;
    ll a=1;
    while(c>=s)
    {
        s=pow(2,a);
        a+=1;
    }
    ll Z=pow(2,a-2)-1;
    ll sum=s-c;
    cout << Z*(Z+sum) <<'\n';
}
    //return 0;
int main(void)
{
    ll t;cin>>t;
    while(t--)
    {
        code();
    }
    exit(0);
    return 0;
}