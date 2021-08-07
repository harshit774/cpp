#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll idx;
    for(ll i=0;i<n;i++){
        idx = i;
        for(ll j=i+1;j<n;j++){
            if(a[j]<a[idx]){
                idx = j;
            }
        }
        swap(a[idx],a[i]);
    }
    for(ll i=0;i<n;i++){
        cout<< a[i] << " ";
    }
    cout<<'\n';
}