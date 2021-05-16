#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
// #define pb push_back
#define fo(i,n) for(ll i=0;i<n;i++)
#define ff(i,n) for(ll i=n-1;i>=0;i--)
// #define YES cout<< 'YES' << endl 
// #define NO cout<< 'NO' << endl 
using namespace std;
// const ll E = 2e3 + 100;
// const ll mod = 1e9 + 7;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;
    cin>>n;ll a[n][n];
    for(ll i=0;i<n;i++)
        for(ll j=0;j<n;j++)
            a[i][j] = -1;
    if(n==2) cout<< -1 <<'\n';
    else{
        ll count=1;
        for(int i=n-1;i>=0;i-=2){
            ll value=i;
            for(int j=n-1;j>=0;j--){
                if(value==n)
                    break;
                a[value][j]=count;
                count++;
                value++;
            }
        }
        for(int i=n-1;i>=0;i-=2){
            ll value=i;
            for(int j=0;j<n;j++){
                if(value<0 || a[j][value]!=-1) break;

                a[j][value]=count;
                count++ , value--;
            }
        }
        for(int i=n-2;i>=0;i-=2){
            ll value=i;
            for(int j=n-1;j>=0;j--){
                if(value==n || a[value][j]!=-1) break;
                a[value][j]=count;
                count++ , value++;
            }
        }
        for(ll i=n-2;i>=0;i-=2){
            ll value=i;
            for(ll j=0;j<n;j++){
                if(value<0 || a[j][value]!=-1) break;
                a[j][value]=count;
                count++ , value--;
            }
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++)
                cout<< a[i][j] <<" ";
            cout<<'\n';
        }
    }

}
return 0;
} //Code Contributed by Harshit Varshney