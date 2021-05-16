#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll i,a[5],cnt=0;
    for(i=0;i<=5;i++){
        cin>>a[i];
    }
    sort(a,a+5);
    for(i=0;i<=5;i++){
        if(a[i]==a[i+1]){
            cnt++;
        }
    }
    cout<< cnt <<'\n';
return 0;
}