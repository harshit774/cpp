#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,key;cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int start = 0 , end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(key==a[mid]){
            cout<< mid << " ";
            break;
        }
        else if(a[mid]>key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return 0;
    //cout<< -1 <<'\n';
}