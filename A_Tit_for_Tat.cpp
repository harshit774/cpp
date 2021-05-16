#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;

// void minimizeWithKSwaps(int arr[], int n, int k)
// {
//     for (int i = 0; i<n-1 && k>0; ++i)
//     {
//         // Set the position where we want
//         // to put the smallest integer
//         int pos = i;
//         for (int j = i+1; j<n ; ++j)
//         {
//             // If we exceed the Max swaps
//             // then terminate the loop
//             if (j-i > k)
//                 break;
  
//             // Find the minimum value from i+1 to
//             // max k or n
//             if (arr[j] < arr[pos])
//                 pos = j;
//         }
  
//         // Swap the elements from Minimum position
//         // we found till now to the i index
//         for (int j = pos; j>i; --j)
//             swap(arr[j], arr[j-1]);
  
//         // Set the final value after swapping pos-i
//         // elements
//         k -=  pos-i;
//     }
// }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,k;cin>>n>>k;
    int a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll i = 0;
    ll j = n-1;
    for(ll i=0;i<n-1;i++)
    {
        if(a[i]<=k)
        {
            k=k-a[i];
            a[n-1]+=a[i];
            a[i]=0;
        }
        else {
            a[n-1]+=k;
            a[i]-=k;
            break;
        }
    }
    for(ll i=0;i<n;i++)
    {
        cout<< a[i] << " ";
    }
    cout<<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney
