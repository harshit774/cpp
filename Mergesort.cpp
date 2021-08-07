#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int merge(ll n,ll a[],ll low,ll mid,ll high){
    ll tmp[n];
    ll i=low , j = mid+1 , k=0;
    while(i<=mid and j<=high){
        if(a[i]<=a[j]){
            tmp[k++] = a[i++];
        }
        else{
            tmp[k++] = a[j++];
        }
    }
    while(i<=mid){
        tmp[k++] = a[i++];
    }
    while(j<=high){
        tmp[k++] = a[j++];
    }
    for(ll i=low;i<=high;i++){
        a[i] = tmp[i-low];
    }
}

void mergesort(ll n,ll a[],ll low,ll high){
    if(low < high){
        ll mid = low + (high-low)/2;
        mergesort(n,a,low,mid);
        mergesort(n,a,mid+1,high);
        merge(n,a,low,mid,high);
    }
}

int main(){
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(n,a,0,n-1);
    for(ll i=0;i<n;i++){
        cout<< a[i] << " "; 
    }
    cout<<'\n';
}