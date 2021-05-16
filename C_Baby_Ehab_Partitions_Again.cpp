#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;

int FindElement(ll A[], ll n)
{
    // traverse array elements
    for (int i = 0; i < n; i++) {
        // If we found that such number
        int flag = 0;
 
        // check All the elements on its left are smaller
        for (int j = 0; j < i; j++)
            if (A[j] >= A[i]) {
                flag = 1;
                break;
            }
 
        // check All the elements on its right are Greater
        for (int j = i + 1; j < n; j++)
            if (A[j] <= A[i]) {
                flag = 1;
                break;
            }
 
        // If flag == 0 indicates we found that number
        if (flag == 0)
            return A[i];
    }
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<< FindElement(a,n) <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney