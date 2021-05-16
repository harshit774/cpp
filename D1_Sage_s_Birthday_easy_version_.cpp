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
    ll arr[n],tmp;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    //sort(a,a+n);
    sort(arr,arr+n);
    for(int i=0;i<n-1;i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
    cout << (n-1)/2 <<'\n';
    // for(ll i=0;i<n;i++)
	// {
    //     if(i%2==0) cout<< a[(n+i)/2] << " ";
	//     else cout<< a[i/2] << " ";
    // }
    for(ll i=0;i<n;i++)
    {
        cout<< arr[i] << " ";
    }
}
return 0;
} //Code Contributed by Harshit Varshney