#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-1;i>=0;i--)
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;

// void accepted(ll n)
// {
//     ll a[20] , r , i = 0;
//     while(n>0) {
//         r = n % 10;
//         if (9-r>r) a[i] = r;
//         else a[i] = 9 - r;
//         i++;
//         n /= 10;
//     }
 
//     if(a[i-1]==0) {
//         cout << 9;
//         i--;
//     }

//     for(ll j=i-1;j>=0;j--){
//         cout << a[j];
//     }
// }

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll a[20] , r , i = 0;
    while(n>0) {
        r = n % 10;
        if (9-r>r) a[i] = r;
        else a[i] = 9 - r;
        i++;
        n /= 10;
    }
 
    if(a[i-1]==0) {
        cout << 9;
        i--;
    }

    for(ll j=i-1;j>=0;j--){
        cout << a[j];
    }
    //accepted(x);
}
return 0;
} //Code Contributed by Harshit Varshney