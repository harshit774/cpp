#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(a,b,c) for(int a=b;a<c;a++)
#define ff(a,b,c) for(int a=b;a>=c;a--)
#define pb push_back
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll count = 0;
    ll a[n];
    //ll sum = 0;
    fo(i,0,n)
    {
        cin>>a[i];
        //sum = sum + a[i];
    }
    sort(a,a+n);
    ll mn = a[0];
    //ll mn = sum/n;
    fo(i,0,n){
        if(a[i]>mn)
        {
            count++;
        }
    }
    cout<< count <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney