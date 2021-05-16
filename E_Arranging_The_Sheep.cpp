#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;cin>>s;
        ll L[n][2],R[n][2];
        for(ll i=0;i<n;i++)
        {
            if(i==0){
                if(s[i]=='*')
                {
                    L[i][0] = 0;
                    L[i][1] = 1;
                }
                else{
                    L[i][0] = 0;
                    L[i][1] = 0;
                }
            }
            else{
                if(s[i]=='*'){
                    L[i][0] = L[i-1][0];
                    L[i][1] = L[i-1][1]+1;
                }
                else{
                    L[i][0]=L[i-1][0]+L[i-1][1];
                    L[i][1]=L[i-1][1];
                }
            }
        }
        for(ll i=n-1;i>=0;i--){
            if(i==n-1){
                if(s[i]=='*'){
                    R[i][0]=0;
                    R[i][1]=1;
                }
                else{
                    R[i][0]=0;
                    R[i][1]=0;
                }
            }
            else{
                if(s[i]=='*'){
                    R[i][0]=R[i+1][0];
                    R[i][1]=R[i+1][1]+1;
                }
                else{
                    R[i][0]=R[i+1][0]+R[i+1][1];
                    R[i][1]=R[i+1][1];
                }
            }
        }
        ll minn=L[n-1][0];
        for(ll i=0;i<n-1;i++){
            minn=min(minn,L[i][0]+R[i+1][0]);
        }
        cout<<minn<<endl;
    }
    return 0;
}