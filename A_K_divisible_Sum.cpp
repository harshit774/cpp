#include<iostream>
#include <cmath> 
#define ll long long int
using namespace std;

int main()
{
    long int t;cin>>t;
    while(t--)
    {
        long int n,k;cin>>n>>k;
        //long int sum=k;
        long int r=n%k;
        if(r!=0 && n>k)
        {
            k=n+k-r;
        }
        if(k%n==0)
        {
            cout<<k/n<<'\n';
        }
        else
        {
            cout<<k/n+1<<'\n';
        }
    }
    return 0;
}
