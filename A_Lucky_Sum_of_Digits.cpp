#include<bits/stdc++.h>
#define ll long long int
using namespace std;
  
void findMin(ll sum) 
{ 
    ll a = 0, b = 0; 
    while (sum > 0) 
    {  
        if (sum % 7 == 0) 
        { 
            b++; 
            sum -= 7; 
        } 
        else if (sum % 4 == 0) 
        { 
            a++; 
            sum -= 4; 
        } 
        else
        { 
            a++; 
            sum -= 4; 
        } 
    } 
  
    if (sum < 0) 
    { 
        printf("-1"); 
        return; 
    } 
  
    for (int i=0; i<a; i++) 
        printf("4"); 
  
    for (int i=0; i<b; i++) 
        printf("7"); 
}
int main()
{
    ll n;cin>>n;
    findMin(n);
    return 0;
}