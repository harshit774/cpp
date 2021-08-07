#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int bubblesort(ll n,ll a[]){
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    bubblesort(n,a);
    for(ll i=0;i<n;i++){
        cout<< a[i] <<" ";
    }
    cout<<'\n';
}