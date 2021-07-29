#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //sort(a,a+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                cout<< a[j] << " ";
            }
        }
        // if(a[abs(a[i])]>=0){
        //     sort(a,a+n);
        //     a[abs(a[i])] = -a[abs(a[i])];
        // }
        // else {
        //     //sort(a,a+n);
        //     cout<< abs(a[i]) << " ";
        // }
    }
}
