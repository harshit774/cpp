#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    //sort(arr,arr+n);
    ll left=0,right=n-1;
    ll mx,x=0;
    ll sum1=0,sum2=0;
    while(left<=right)
    {
        if(arr[left]>arr[right])
        {
            mx=arr[left];
            left++;
        }
        else
        {
            mx=arr[right];
            right--;
        }
        if(x%2==0)
        {
            sum1+=mx;
        }
        else
        {
           sum2+=mx;
        }
        x++;
    }
   cout<< sum1 << " " << sum2 <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney