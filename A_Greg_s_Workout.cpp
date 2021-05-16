#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;cin>>n;
    //for(int i=0;i<n;i++) cin>>a[i];
    int x=0,y=0,z=0;
    for(int i=1;i<=n;i++)
    {
        cin>>t;
        if(i%3==1) x+=t;
        else if(i%3==2) y+=t;
        else z+=t;
    }
    if(x>y and x>z) cout<<"chest"<<'\n';
    else if(y>z and y>x) cout<<"biceps"<<'\n';
    else cout<<"back"<<'\n';

}