#include <iostream>
using namespace std;
 
int main()
{   
    long int n;cin>>n;
    //long int a=0,b=1;
    if(n==0)cout<< 0 <<' '<< 0 <<' '<< 0 <<' ';
    else {
        long int a=0,b=1;
        while((a+b)!=n)
        {
            a=b;
            b=a+b;
        }
        cout<< 0 <<' '<< a <<' '<< b <<' ';
    }
    //cout<< 0 <<' '<< a <<' '<< b <<' ';
    return 0;
}